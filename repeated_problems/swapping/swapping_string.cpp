#include <iostream>
#include <string>
using namespace std;

// Function prototype
string reverseString(const string& name);

int main() {
    string name = "1234";
    string reversed = reverseString(name);

    for(char a: reversed) {
        cout << a << endl;
    }
}

// Function definition
string reverseString(const string& name) {
    string reversed;
    const char* start = name.c_str();
    const char* end = name.c_str() + name.size() - 1;

    while(start <= end) {
        reversed.push_back(*end);
        end--;
    }
    return reversed;
}