#include <iostream>
#include <vector>
#include <string>

using namespace std;
void Log(const char* message){
    std::cout << message << std::endl;
} // Declaration

int main(){
    vector<string> msg {"Hello", "C++", "from", "Linux", "Vs"};
    for (const string& word: msg) {
        cout << word << " ";
    }

    Log("Hello world");

    cout << endl;
}