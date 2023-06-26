#include <iostream>
#define Log(x) std::cout << x << std::endl

void IncrementWithPointer(int* value) {
    (*value)++; // dereference and update value
}

void IncrementWithRef(int& value){
    value++;
}

int main() {
    int a = 5;
    int& ref = a; // ref is a reference to a, or alias. Ampersand is part of the type
    // ref doesn't actually exist in memory, only in the source code.

    ref = 2;
    Log(a); // 2

    // We can pass a memory address to a function to ovewrite values
    IncrementWithPointer(&a);
    Log(a);

    // Simpler way of writing this function, just have the function param as a ref (alias)
    IncrementWithRef(a);
    Log(a);
}