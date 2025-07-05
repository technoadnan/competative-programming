#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n {};
    int a = 1;
    cin >> n;

    bool status = true;

    int result = 0;

    while (status)
    {
        if(n / pow(5,a) != 0)
        {
            result += n / pow(5,a);
            a += 1;
        } else{
            status = false;
        }
    }

    cout << result << endl;
    
}