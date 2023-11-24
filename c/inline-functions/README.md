### Overview

C code related to inline functions.

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

| Filename                  | Description                                         |
|---------------------------|-----------------------------------------------------|
| `CMakeLists.txt`          | CMake project for the `inline_functions.c` program. |
| `inline_functions.c`      | C code for inline functions.                        |
| `test_inline_functions.c` | C unit tests using Check for inline functions.      |