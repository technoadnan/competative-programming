#include <iostream>
#include <string>
using namespace std;


/*
spaces decrease each time n-1, for the last loop there will not be any spae 
1st half each char increase by 1 n+1
2nd half each char decrease by 1, the first line doesn't consist of any char so -1
following each time increase by +1 for overall len() such that the pattern reflects 
-1
0
1 0 
2 1 0
*/


/*
c++ prints in terms horizontal line 
visuilzing the input as num affirmative the response 
such as string length with 4, ABCD
3 2 1 0 -1
2 1 0 1 0
1 0 1 2 1 0 
0 1 2 3 2 1 0
*/


int main()
{
    string name = "";
    cin >> name;

    int n = name.length();
    int char_increase = 1;
    int char_increase_2nd = -1;
    int space_decrease = 0;

    for (size_t i = 0; i < n; i++)
    {
        // spaces
        for (size_t i = (n - 1) - space_decrease; i > 0; i--)
        {
            cout << " ";
        }

        // 1st half
        for (size_t i = 0; i < char_increase; i++)
        {
            cout << name[i];
        }

        // 2nd half
        for (int k = char_increase_2nd; k >= 0; k--)
        {
            cout << name[k];
        }

        char_increase++;
        char_increase_2nd++;
        space_decrease++;

        cout << endl;
    }

    return 0;
}