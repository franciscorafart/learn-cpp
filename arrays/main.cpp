
#include <iostream>
#include <array>

int main(int argc, const char * argv[]) {
    
    // Arrays are pointer types
    int example[5]; // declaration. Array of 5 int elements created on the Stack.
    example[0] = 2;
    example[4] = 4;
    
    // example[5] = 4; This is a memory error, it will be shown in debug mode, but in release mode no. It can lead to really hard bugs, as you would modify
    // memory from other variables.
    
    for (int i=0; i< 5; i++) {
        example[i] = 2;
    }
    
    int* ptr = example; // This works because an array is a pointer
    
    std::cout << example[4] << std::endl;
    
    std::cout << example << std::endl; // prints out address, because array is a pointer type;
    
    std::cout << ptr[2] << std::endl;
    
    // Arrays in the heap
    int* another = new int[5]; // array created on the Heap
    for (int i=0; i< 5; i++) {
        another[i] = 3;
    }
    
    std::cout << another[4] << std::endl;
    
    delete[] another; // manually delete from the Heap
    
    std::array<int, 5> stdArray;
    
    // Std array data structure in C++11, with some overhead
    for (int i = 0; i < stdArray.size(); i++) {
        stdArray[i] = 8;
    }
    
    return 0;
}
