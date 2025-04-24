import hashlib
import requests
import time
from datetime import datetime

# === Settings ===
url = "http://localhost:6060/gamble"
start_time = int(time.time()) - 3600  # 1 hour in the past
end_time = int(time.time()) + 3600    # 1 hour in the future

def find_lucky_timestamp(start, end):
    print(f"[*] Brute-forcing from {start} to {end}...")
    for ts in range(start, end):
        h = hashlib.sha256(str(ts).encode()).digest()
        if h[0] == 0xff and h[1] == 0xff:
            return ts
        if ts % 10000 == 0:
            print(f"[*] Checked up to timestamp {ts}")
    return None

# === Run ===
ts = find_lucky_timestamp(start_time, end_time)

if ts:
    http_date = datetime.utcfromtimestamp(ts).strftime('%a, %d %b %Y %H:%M:%S GMT')
    print(f"[+] Found lucky timestamp: {ts} ({http_date})")

    headers = {
        "Date": http_date
    }

    print("[*] Sending request to remote server...")
    res = requests.post(url, headers=headers)
    print("[+] Server Response:")
    print(res.json())
else:
    print("[-] No lucky timestamp found in the given range.")

