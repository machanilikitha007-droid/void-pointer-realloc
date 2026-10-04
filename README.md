# Void Pointer with realloc()

## Author
M.Likitha

## Description
This program demonstrates using a void pointer with
realloc() to resize dynamically allocated memory.

Initially, memory is allocated for two integers.
realloc() is then used to increase the memory size
to store five integers.

## Concepts Used
- Void pointer
- malloc()
- realloc()
- Dynamic memory allocation
- Type casting
- Array access
- free()

## How to Run

gcc void_pointer_realloc.c -o void_pointer_realloc

./void_pointer_realloc

## Sample Output

Before realloc:
10 20
After realloc:
10 20 30 40 50

