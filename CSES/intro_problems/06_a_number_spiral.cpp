// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int row = {}, col = {};
//     vector<int> diagonals;
//     int t{};
//     cin >> t;
//     while (t-- > 0)
//     {
//         int y{}, x{};
//         cin >> y >> x;
//         row = y, col = x;

//         for (int i = 1; i <= max(row, col); i++)
//         {
//             diagonals.push_back(i * i - (i - 1));
//         }

//         for (int row = 1; row <= y; row++)
//         {
//             for (int col = 1; col <= x; col++)
//             {
//                 if (y == row && x == col)
//                 {
//                     // L.H.S of the diagonal
//                     if (row % 2 == 0 && col <= row)
//                     {
//                         cout << diagonals.at(row - 1) + (row - 1) - (col - 1) << endl;
//                     }
//                     else if (row % 2 == 1 && col <= row)
//                     {
//                         cout << diagonals.at(row - 1) - (row - 1) + (col - 1) << endl;
//                     }
//                     // R. H .S  of the diagonal
//                     else if (col % 2 == 0 && col > row)
//                     {
//                         cout << diagonals.at(col - 1) - (col - 1) + (row - 1) << endl;
//                     }
//                     else if (col % 2 == 1 && col > row)
//                     {
//                         cout << diagonals.at(col - 1) + (col - 1) - (row - 1) << endl;
//                     }
//                 }
//             }
//             // cout << endl;
//         }
//     }
//     // for (size_t i = 1; i <= 5; i++)
//     // {
//     //     diagonals.push_back(i * i - (i - 1));
//     // }

//     // for (size_t row = 1; row <= 5; row++)
//     // {
//         // for (size_t col = 1; col <= 5; col++)
//         // {
//             // if (row == col)
//             // {
//             //     diagonal = row * col - (row - 1);
//             //     cout << diagonal << " ";
//             // }
//             // else
//             // {

//             // L.H.S of the diagonal
//     //         if (row % 2 == 0 && col <= row)
//     //         {
//     //             cout << diagonals.at(row - 1) + (row - 1) - (col - 1) << " ";
//     //         }
//     //         else if (row % 2 == 1 && col <= row)
//     //         {
//     //             cout << diagonals.at(row - 1) - (row - 1) + (col - 1) << " ";
//     //         }
//     //         // R. H .S  of the diagonal
//     //         else if (col % 2 == 0 && col > row)
//     //         {
//     //             cout << diagonals.at(col - 1) - (col - 1) + (row - 1) << " ";
//     //         }
//     //         else if (col % 2 == 1 && col > row)
//     //         {
//     //             cout << diagonals.at(col - 1) + (col - 1) - (row - 1) << " ";
//     //         }
//     //     }
//     //     cout << endl;
//     // }

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int row = {}, col = {};
    vector<int> diagonals;

    int y = 5, x = 5;

    for (int i = 1; i <= max(y, x); i++)
    {
        diagonals.push_back(i * i - (i - 1));
    }

    for (int row = 1; row <= y; row++)
    {
        for (int col = 1; col <= x; col++)
        {
            // L.H.S of the diagonal
            if (row % 2 == 0 && col <= row)
            {
                cout << diagonals.at(row - 1) + (row - 1) - (col - 1) << " ";
            }
            else if (row % 2 == 1 && col <= row)
            {
                cout << diagonals.at(row - 1) - (row - 1) + (col - 1) << " ";
            }
            // R. H .S  of the diagonal
            else if (col % 2 == 0 && col > row)
            {
                cout << diagonals.at(col - 1) - (col - 1) + (row - 1) << " ";
            }
            else if (col % 2 == 1 && col > row)
            {
                cout << diagonals.at(col - 1) + (col - 1) - (row - 1) << " ";
            }
        }
        cout << endl;
    }
}