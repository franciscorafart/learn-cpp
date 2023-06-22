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

### Functions

