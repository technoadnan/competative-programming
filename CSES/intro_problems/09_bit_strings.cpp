#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ll = 1e9+7; // mod

    long long result = 1;
    int b = 2;

    while(n > 0) {
        if(n % 2 == 0) {
            n = n / 2; // power reduce by 2 times 
            b = (1LL * b * b) % ll; // base x base 
        } else {
            // trying to get the even by reducing 1 for odd 
            result = (result * b) % ll; // adding base to result 
            n = n - 1;
        }
    }

    cout << result  << endl;

}