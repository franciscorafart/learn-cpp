#include <iostream>
#include <bitset>
#include <climits>
#include <cstring>

#define Log(x) std::cout << x << std::endl

int main() {
    // void* ptr = nullptr; // null pointer

    int v = 8;
    int* ptr = &v; // reference (memory address)
    Log(ptr);
    Log(v);

    // To read and modify data we have to dereference the pointer.
    // We do that by prepending a * to the pointer
    *ptr = 10; // Writing to the data at that memory address
    Log(v);

    // The previous examples use the memory stack. You can allocate memory on the heap instead.
    char* buffer = new char[8]; // Allocate 8 bytes of memory to the heap, and return the pointer at the beggining of the block of memory
    std::memset(buffer, 0, 8); // Set the value to the heap
    for (int i = 0; i < 8; i++){
        Log(static_cast<int>(buffer[i]));
    }

    char** doublePointer = &buffer;
    Log(doublePointer);
    delete[] buffer; // Delete the heap allocated data when we're done with it
    std::cin.get();
}