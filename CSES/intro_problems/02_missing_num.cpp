#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

   { // brute force
      int t;
      cin >> t;
      vector<int> vec(t + 1, 0);

      while (t-- > 1)
      {
         int n;
         cin >> n;
         vec.at(n) = n;
      }

      for (int i = 1; i < vec.size(); i++)
      {
         if (vec.at(i) == 0)
         {
            cout << i;
         }
      }
   }
   {
      // XOR
      int t;
      cin >> t;

   }
   return 0;
}
