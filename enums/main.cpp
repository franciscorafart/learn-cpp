#include <iostream>

#define Log(x) std::cout << x << std::endl;

enum Example {
    A = 3, B, C // Sequential values from the frist one if not specified
};

int main(int argc, const char * argv[]) {
    Example value = A; // Enum name can be used as type (int in this case)
    Log(value);
    Log(Example::B);
    Log(Example::C);
    
    if (value == 3) {
        Log("Tres");
    }
    return 0;
}
