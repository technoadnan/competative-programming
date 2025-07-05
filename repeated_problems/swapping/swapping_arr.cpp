#include <iostream>
#include <string>
using namespace std;

void reverse_arr(int *arr, int size);
void swapping(int *a, int *b);
void reverse_arr_1(int *arr, int size);

int main() {
    int nums[] = {1,2,3,4,5};
    reverse_arr(nums, 5);
    for(int num: nums) {
        cout << num << endl;
    }
}


void reverse_arr(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

// swapping can be done without third variable 
// see the file swapping.cpp
void swapping(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_arr_1(int *arr, int size) {
    int upto = size / 2;
    for(int i = 0; i < upto; i++) {
        swapping((arr+i), (arr + size - i - 1)); 
        // arr + i is the start 
        // arr + size - i - 1 is the end 
            // point(0) + size - i(loop 0,1...n) 1(to decrement)
    }
}