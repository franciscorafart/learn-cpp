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

### Compiler
- Compiler takes text files of source code and converts it into an intermediate object file.
- It pre processes code, then createa an abstract syntax tree, and finally creates machine code. 
- The compiler reates obj file for every C++ file (translation unit). In C++ there's no such thing as a file, a file is just a way to feed the compiler with source code. A translation unit can be made of multiple cpp files if we include them in one another.
- Stage 1: Pre-processing: 
    - #include -> Opens file to include and copy pastes its content.
    -  #define => Looks for first work, and replaces it with whatever follows
    Example: `#define Log(x) std::cout << x << std::endl;`
    #if => Conditionally pre proccess code
- Stage 2: Compile into machine code
    An Obj file has just binary. To make it a little more readable we can compile an assembly file `.asm`
    
### Linker
- After compiling, we have to go through the linking process: Find symbols and functions and link them together.
- Each cpp file is compiled to its own .obj file, which have no relation between them. We need to link those files together into one program.
- Compiling and linking errors are separate things. You can compile with no errors, but have link errors. Compile error code starts with C and linker errors start with LNK.
- Common error: Unresolved external symbol
- When reusing functions acrross files, kee in mind that including copies code from one file. Avoid function definitions in header files, define the function in a cpp file and just write the declaration on the header file so that other files can use i as well.

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


### Classes
- C++ doesn't enforce a certain style of programming, but it has classes so it works well in object oriented programming. 
- Class => structure to put together data and functionality (variables and functions)
- When creating a new class you can specify how visible the methods and properties are. By default a class makes them private. Making variables public makes class variables and methods accessible to external code.

### Structs
The only difference is that classes are private by default and Structs are public. In Structs you have to explicitely write `private` to make a property not accessible.

- Even though techically there's no difference besides the default public / private properties, there are stylistic differences in their use.
- Structs exist in C++ because of the backwards compatibility it wants to maintain with C
- Stylistically, some people (The cherno) use structs to represent simple data structures without a lot of complexity and functionality, like a group of variables to represent some data.
- Stylistically, a Class would be prefered when there's going to be inheritance and extension down the line.
    
### Conditions and branches
- When compiling all source code gets loaded in memory. When we use conditions we tell the application to jump to other parts of that memory.
- If statmentes and branches carry a bit of overhead beacause of the code jumping in memory. Optimized code will avoid `if` statements.

### Loops
- To run code repetitively
- Loops are useful for games, as they keep a program running and updating

### Static
- When inside a class: The variable defined as `static` will share memory with all the instances of the class.
- When outside of a class in globalscope: The static variable symbol (name) gets assigned only to the tranlation unit (file) it is in, meaning the same variable name can be used in other tranlation units (files) without a linker symbol error.
- Good practice: Mark function variables as static unless you need them to be linked accross tranlation units (files), else you can run into global scope bugs.
