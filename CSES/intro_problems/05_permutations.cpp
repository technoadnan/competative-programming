#include <iostream>
using namespace std;

/*
beautiful permutation - adjacent difference CAN"T be 1 
the difference btw two number adjacent(n and n1...) can't be 1  

TRICK:
print all even THEN print all odd
or 
print all odd THEN print all even

- even..even..even...odd.odd..odd
- odd...odd..odd..even..even.even

2 and 3 can't never be beautiful permutation
1 can be as 1 itself

*/



int main()
{
   int n;
   cin >> n;


   if(n == 1) cout << 1;
   else if (n > 3)
   {
      for (int i = 1; i <= n; i++)
      {
         if(i % 2 == 0) {
            cout << i << " ";
         }
      }
      for (int i = 1; i <= n; i++)
      {
         if(i % 2 == 1) {
            cout << i << " ";
         }
      }

   } else
   {
      cout << "NO SOLUTION";
   }
}