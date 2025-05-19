#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   long long t;
   cin >> t;
   while (t > 1)
   {
      cout << t << " ";
      if(t & 1){ // bitwise AND operator to find even or odd
         t = (t * 3) + 1;
      } else {
         t = t /2;
      }
   }
   cout << t;
   

   return 0;
}
