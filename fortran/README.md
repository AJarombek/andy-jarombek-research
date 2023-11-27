### Overview

Code samples written in Fortran.

### Commands

```bash
# https://github.com/fxcoudert/gfortran-for-macOS/releases
gfortran --version

# Execute Fortran code directly with the gfortran compiler
gfortran -o hello_world hello_world.f90
./hello_world

# Execute Fortran code with CMake
/bin/bash cmake.sh
```

### Files

| Filename          | Description                                                   |
|-------------------|---------------------------------------------------------------|
| `basics.f90`      | Some basic Fortran programming concepts.                      |
| `cmake.sh`        | Commands for running CMake and the compiled Fortran binaries. |
| `CMakeLists.txt`  | CMake configuration for the Fortran programs.                 |
| `Dockerfile`      | Dockerfile for an image containing Fortran and CMake.         |
| `hello_world.f90` | A "Hello World" program written in Fortran.                   |
| `matrices.f90`    | Code for column major matrices in Fortran.                    |

### Resources

1) [Modern Fortran](https://livebook.manning.com/book/modern-fortran/chapter-1/v-11/33)
2) [Legacy of Fortran](https://en.wikipedia.org/wiki/Fortran#Science_and_engineering)
3) [Fortran on MacOS](https://stackoverflow.com/a/37666121)
4) [CMake + Fortran](http://fortranwiki.org/fortran/show/Build+tools#cmake)