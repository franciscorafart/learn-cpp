#include <iostream>
#include <vector>
#include <string>
#include "Log.hpp"

using namespace std;

int main(){
    vector<string> msg {"Hello", "C++", "from", "Linux", "Vs"};
    for (const string& word: msg) {
        cout << word << " ";
    }
    
    Log("Hello world");

    cout << endl;
}
