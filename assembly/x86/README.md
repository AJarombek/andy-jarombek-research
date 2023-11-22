### Overview

x86 assembly language code samples using NASM (Netwide Assember).

### Commands

**Setup on macOS**

```bash
cd x86
docker-compose up --build
docker exec -it x86_arch_linux_1 /bin/bash
```

**Compile and run (on Docker)**

```bash
# Compile the assembly file
nasm -f elf64 arithmetic.asm -o arithmetic.o

# Link the object file
gcc arithmetic.o -o arithmetic -no-pie

# Run the executable
./arithmetic
```

### Files

| Filename              | Description                                                               |
|-----------------------|---------------------------------------------------------------------------|
| `arithmetic.asm`      | Basic arithmetic operations written in NASM x86.                          |
| `atomic.asm`          | Atomic operations written in NASM x86.                                    |
| `docker-compose.yaml` | Docker Compose setup for running NASM x86 assembly language on archlinux. |
| `Dockerfile`          | Dockerfile for using NASM x86 assembly language on archlinux.             |
| `guess_number.asm`    | Guess the number game written in NASM x86.                                |