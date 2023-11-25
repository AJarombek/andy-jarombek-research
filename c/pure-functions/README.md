### Overview

C code related to pure functions.

### Commands

**Run CMake Tests**

```bash
export CHECK_LIB_DIR=/path/to/check/library/directory
mkdir build
cd build
cmake ..
make
ctest
```

### Files

| Filename                | Description                                       |
|-------------------------|---------------------------------------------------|
| `CMakeLists.txt`        | CMake project for the `pure_functions.c` program. |
| `pure_functions.c`      | C code for pure functions.                        |
| `test_pure_functions.c` | C unit tests using Check for pure functions.      |