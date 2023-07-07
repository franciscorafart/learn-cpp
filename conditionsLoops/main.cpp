#include <iostream>

int main(int argc, const char * argv[]) {
    int x = 7;
    
    if (x == 5) {
        std::cout << "Hello, World!\n";
    } else {
        std::cout << "Hello, No world!\n";
    }
    
    // For Loops syntax
    for (int i = 0; i < 5; i++) {
        std::cout << "print\n";
    }
    
    // different syntax
    int i = 0;
    for ( ;i < 5; ) {
        std::cout << "Different one\n";
        i++;
    }
    
    // While loops
    i = 0;
    while (i < 5) {
        std::cout << "While\n";
        i++;
    }
    
    // Do while, body executed at least once
    do {
        std::cout << "Do while!\n";
    } while (i < 5);
    
    return 0;
}
