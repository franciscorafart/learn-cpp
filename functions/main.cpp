#include <iostream>

int Multitply(int a, int b){
    return a * b;
}

void MultiplyAndLog(int a, int b) {
    int result = a * b;
    std::cout << result << std::endl; 
}

int main(){
    MultiplyAndLog(5, 6);
    MultiplyAndLog(45, 88);
    MultiplyAndLog(32, 34);
    std::cin.get();
}