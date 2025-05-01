// run.js
const fs = require("fs");
const wasmBuffer = fs.readFileSync("webassembly.wasm");

WebAssembly.instantiate(wasmBuffer, {
  env: {
    _emscripten_memcpy_js: () => {}, // stub
    emscripten_resize_heap: () => {}, // stub
  },
  wasi_snapshot_preview1: {
    fd_write: () => {}, // stub
  }
}).then(({ instance }) => {
  if (instance.exports.main) {
    instance.exports.main(0, 0);
  } else {
    console.log("No main function found.");
  }
});

