#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long row = {}, col = {};
    long long t{};
    cin >> t;
    while (t-- > 0)
    {
        long long y{}, x{};
        cin >> y >> x;
        row = y, col = x;

        long long diagonal = max(row, col) * max(row, col);

        if (col <= row)
        {
            if (row % 2 == 0)
            {
                cout << (diagonal - (row - 1)) + (row - 1) - (col - 1) << " ";
            }
            else
            {
                cout << (diagonal - (row - 1)) - (row - 1) + (col - 1) << " ";
            }
        }
        else
        {
            if (col % 2 == 0)
            {
                cout << (diagonal - (col - 1)) - (col - 1) + (row - 1) << " ";
            }
            else
            {
                cout << (diagonal - (col - 1)) + (col - 1) - (row - 1) << " ";
            }
        }

        // // L.H.S
        // if (row % 2 == 0 && col <= row)
        // {
        //     cout << (diagonal - (row - 1)) + (row - 1) - (col - 1) << " ";
        // }
        // else if (row % 2 == 1 && col <= row)
        // {
        //     cout << (diagonal - (row - 1)) - (row - 1) + (col - 1) << " ";
        // }
        // // R. H .S  of the diagonal
        // else if (col % 2 == 0 && col > row)
        // {
        //     cout << (diagonal - (col - 1)) - (col - 1) + (row - 1) << " ";
        // }
        // else if (col % 2 == 1 && col > row)
        // {
        //     cout << (diagonal - (col - 1)) + (col - 1) - (row - 1) << " ";
        // }
    }
}
