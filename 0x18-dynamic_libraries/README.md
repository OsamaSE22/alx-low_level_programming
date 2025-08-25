# 0x18. C - Dynamic libraries

## Project Overview
This project introduces **dynamic libraries in C** (also called shared libraries).  
You will learn how they work, how to create them, and how to use them at both compile-time and run-time.

Unlike **static libraries**, which copy all the required code into the executable, **dynamic libraries** allow multiple programs to share the same library code in memory.  
This makes executables smaller and easier to update.

---

## Learning Objectives
At the end of this project, you should be able to explain:

- What a **dynamic library** is and how it works.
- How to **create a dynamic library** in C using `gcc`.
- How to **link a program** against a dynamic library.
- What the environment variable **`$LD_LIBRARY_PATH`** is and how to use it.
- The **differences between static and shared libraries**.
- Basic usage of:
  - `nm` → list symbols in a library
  - `ldd` → show shared libraries used by an executable
  - `ldconfig` → configure dynamic linker run-time bindings

---

## Requirements

### C Code
- Compiled on **Ubuntu 20.04 LTS** with:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89

- Code must follow **Betty style**.
- No global variables allowed.
- No more than 5 functions per file.
- Do not use the standard library (e.g. `printf`, `puts`).
- You may use `_putchar`.
- All prototypes should be in **main.h**.
- All files must end with a new line.

### Bash Scripts
- Tested on **Ubuntu 20.04 LTS**.
- The first line must be:

#!/bin/bash

- Files must be executable.
- Files must end with a new line.
- Each script should be described in this README.

---

## Usage

### 1. Create a dynamic library

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -o libdynamic.so *.o


### 2. Compile a program using the library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -L. -ldynamic -o myprog


### 3. Set `LD_LIBRARY_PATH` if needed
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
./myprog


---

## Useful Commands
- `nm -D libdynamic.so` → list dynamic symbols in the library.
- `ldd myprog` → show shared libraries required by an executable.
- `ldconfig -n .` → add the current directory to the linker cache.

---

## Files
- `main.h` → header file with function prototypes.
- `*.c` → source files.
- `libdynamic.so` → the dynamic library.
- `*.sh` → helper scripts.
- `README.md` → project documentation.

