#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swapping(int *ptr1, int *ptr2) {
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr2 = *ptr1 - *ptr2;
}


int main() {
    int x = 100;
    int y = 200;
    
    int *a = &x;
    int *b = &y;

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    // a + b = a 
    // 100 + 200 = 300;
    // b = a - b;
    // a = a - b;

    cout << *a <<endl;
    cout << *b <<endl;

    return 0;
}