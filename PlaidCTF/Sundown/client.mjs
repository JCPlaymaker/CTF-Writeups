import { createHash } from "node:crypto";
import { spawn } from "node:child_process";

function processArgv() {
	const argv = process.argv;

	if (argv.length < 3 || argv[2].startsWith('-')) {
		console.error('Usage: node client.mjs <launcher-url> [--password password] [--team-token team-token] -- <command>');
		process.exit(1);
	}

	let args = {
		launcherUrl: argv[2]
	};

	for (let i = 3; i < argv.length; i++) {
		if (argv[i] === '--') {
			args.command = argv.slice(i + 1);
			break;
		} else if (argv[i] === '--password') {
			i++;
			args.password = argv[i];
		} else if (argv[i] === '--team-token') {
			i++;
			args.teamToken = argv[i];
		}
	}

	if (args.command === undefined) {
		console.error('Usage: node client.mjs <launcher-url> [--password password] [--team-token team-token] -- <command>');
		process.exit(1);
	}

	return args;
}

const args = processArgv();

console.log("Requesting challenge");
console.log(`${args.launcherUrl}/api/challenge/request`);
const requestChallengeResult = await fetch(`${args.launcherUrl}/api/challenge/request`, {
	method: "POST",
	headers: {
		"Content-Type": "application/json"
	},
	body: JSON.stringify({
		password: args.password,
		teamToken: args.teamToken
	})
});

if (!requestChallengeResult.ok) {
	console.error("Failed to request challenge: " + await requestChallengeResult.text());
	process.exit(1);
}

const challenge = await requestChallengeResult.json();
console.log(`Received challenge, difficulty = ${challenge.difficulty}, seed = ${challenge.seed}`);

let i = 0;

while (true) {
	const hash = createHash("sha256");
	hash.update(challenge.seed + i);
	const digest = hash.digest();
	const top32 = digest.readUInt32BE(0);
	if ((top32 >>> (32 - challenge.difficulty)) === 0) {
		break;
	}
	i++;
}

console.log(`Submitting response ${i}`);

const submitSolutionResult = await fetch(`${args.launcherUrl}/api/challenge/response`, {
	method: "POST",
	headers: {
		"Content-Type": "application/json"
	},
	body: JSON.stringify({
		id: challenge.id,
		response: i.toString()
	})
});

if (!submitSolutionResult.ok) {
	console.error("Failed to submit solution: " + await submitSolutionResult.text());
	process.exit(1);
}

let job = await submitSolutionResult.json();

while (job.address === undefined) {
	console.log(`Waiting for job to begin (${job.position} jobs ahead of you)...`);

	await new Promise((resolve) => setTimeout(resolve, 5000));

	const getJobResult = await fetch(`${args.launcherUrl}/api/job/${job.id}`);
	if (!getJobResult.ok) {
		console.error("Failed to get job");
		process.exit(1);
	}

	job = await getJobResult.json();
}

console.log(`Job started, running: ADDRESS=${job.address} ${args.command.join(" ")}`);

const child = spawn(args.command[0], args.command.slice(1), {
	stdio: "inherit",
	env: {
		...process.env,
		ADDRESS: job.address
	}
});

child.on("exit", (code) => {
	console.log(`Child process exited with code ${code}`);
	process.exit(code);
});

setTimeout(() => {
	console.error("Instance was killed, sending SIGINT to child process");
	child.kill("SIGINT");
}, job.expires_at - Date.now());
