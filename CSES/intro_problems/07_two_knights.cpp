#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n{}; // 8
    // full grid - attack = Does not attack
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        long long full_grid = (pow(i, 2)) * (pow(i, 2) - 1)/2;
        long long attack = 4 * ((i - 1) * (i - 2));
        cout << full_grid - attack << endl;
    }
}