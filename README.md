# learning-c

Me learning C from the ground up, one small program at a time. Each file explores one idea and has notes-to-self in the comments about what surprised me or finally clicked.

Compile any of them:
```
gcc -std=c11 -Wall -Wextra -o prog 01_hello.c && ./prog
```

| file | what I was exploring |
|---|---|
| `01_hello.c` | how a program starts and what `return 0` means |
| `02_types_sizes.c` | how many bytes each type actually takes (`sizeof`) |
| `03_overflow.c` | what happens when a number gets too big (it wraps) |
| `04_pointers.c` | addresses, `&`, and reading through `*` |
| `05_arrays_pointers.c` | how `arr[i]` is really `*(arr + i)` |
| `06_strings.c` | strings as char arrays ending in `\0` |
| `07_stack_heap.c` | stack vs heap, `malloc` and `free` |
| `08_functions.c` | pass by value vs passing a pointer |
| `09_structs.c` | grouping data, and dot vs arrow |
| `10_hexdump.c` | reading raw bytes and spotting endianness |
| `11_recursion.c` | a function calling itself, and the base case |
| `12_bitwise.c` | `& | ^ ~ << >>` and reading single bits |
| `13_fileio.c` | reading and writing files safely |
| `14_dynamic_array.c` | growing an array with `realloc` |
| `15_argv.c` | reading command-line arguments |

Next on my list: the preprocessor, function pointers, and writing a tiny linked list.
