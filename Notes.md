# Notes C++

Variables are stored on Heap or Stack

### Primitive data types
Only difference between primitive data types is how much memory they use.

1. Integer (4 bytes of data / 32 bits)
`int` integer
`int var1 = 8;` // Signed (positive/negative) integer -2b +2B

2. Unsigned Integer (Always positive)
`unsigned int = 8;`

3. Different number types
char (1 byte), short (2 bytes), int (4bytes), long (4 bytes), long long (8 bytes)
- char can store numbers and characters, but it's used for characters.

4. Decimal numbers
- float (4 bytes)
`float num = 5.5f` => f is for float

- double (8 bytes)
`double num = 5.5`

5. Boolean (1 byte)
Why a full byte for boolean values. To retreive data from memory there's no way to retreive individual bits, so it uses the whole byte.

6. `sizeof` operator will tell us the memory size of a variable.

For example: `std::out << sizeof(bool) << std::endl;`

7. Pointers
- Pointer add `*` after variable name
- Reference add `&` after variable name

### Header Files

- Header files are used to declare certain types of functions. If we write a function in
one file and use it in another, we need a place to store the declarations => header files.
- Through header files we can copy / paste code from one cpp file into another.
- Anything that starts with a `#` is a pre-processor command.
- Header guards. `#pragma once` Adding this pre-processor directive to the header file prevents multiple inclusions of the same header file in the compilation process. With his command the file is marked as 'seen'or 'processed'. => Simpler way of implementing (#ifndef/#define/#endif)
- #include with curly braces refers to an import with a relative position to the directory. Include with <> refers to specific compiler include directory paths in our computer.
- Files within the C standard library usually have a <file.h> extension and the ones of the C++ standard library don't have any extensions <file>

### Functions
Like in any programming language functions are a tool to keep code DRY and clean. In c++ we shouldn't over do it as executing a funcion requires many extra steps that will make the code run slower: Create entire stack frame for the function including params, push a return address into the stack, and jump to different part of bunary to execute instructions.
There's a process called "inlining a function" that the compiler can do to avoid this issue.

Functions with a return type need to return a value, except for the `main` function which is a special type. This is only on Debug mode, it doesn't apply to Release mode.

### Pointers
Definition: A pointer is a variable that stores an integer /address that corresponds to a location in memory.

```
int a = 5;
int* ptr = &a;
```

In this code we assign an int variable `a` and then creata a pointer `ptr` that stores the reference integer.

Since a pointer is a variable, it can also can have a pointer. This is a double pointer:
```
int** = &ptr;
```

Types are not really important for pointers, the compiler doesn't care about the type.

### References
Pointers and references are technically the same thing, it's just syntax sugar and semantic difference to make it easier to read.

References are not new variables, just references.

You cannont reassign references, because they're not real variables, just aliases. You would be just modifying the value of the original
