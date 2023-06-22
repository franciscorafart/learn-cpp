#include <iostream>

int Multitply(int a, int b){
    return a * b;
}

int main(){
    int a = 5;
    int b = 6;
    int c = Multitply(a,b);
    std::cout << c << std::endl;
    std::cin.get();
}