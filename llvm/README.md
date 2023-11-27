### Overview

Code samples written in LLVM IR.

### Commands

```bash
sudo chown -R $(whoami) /usr/local/Frameworks
chmod u+w /usr/local/Frameworks

brew install llvm

/usr/local/opt/llvm/bin/lli --version

/usr/local/opt/llvm/bin/lli helloworld.ll
/usr/local/opt/llvm/bin/lli basics.ll

/usr/local/opt/llvm/bin/lli arithmetic.ll

# Exit code from arithmetic.ll will be the result of 2 + 3
echo $?
```

### Files

| Filename            | Description                                                 |
|---------------------|-------------------------------------------------------------|
| `BUILD`             | Please build rules for LLVM programming code samples.       |
| `Dockerfile`        | Dockerfile for an image containing LLVM and Please Build.   |
| `arithmetic.ll`     | Performing some simple arithmetic with LLVM IR.             |
| `basics.ll`         | Learning the basics of LLVM IR.                             |
| `helloworld.ll`     | A "Hello World" LLVM IR example.                            |
| `run_arithmetic.sh` | Bash script to run and print the result of `arithmetic.ll`. |

### Resources

1) [LLVM IR C Examples](https://github.com/Virtual-Machine/ir-examples)
2) [LLVM IR Reference](https://llvm.org/docs/LangRef.html)