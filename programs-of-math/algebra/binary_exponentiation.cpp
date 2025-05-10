#include<bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) {
   // without recursion 
   long long res = 1;
   while (b > 0)
   {
      if (b & 1) // return 0 and 1; odd and even 
         res = res * a; 
      a *= a;
      b >>= 1; // right shift,  b = b / 2
   }
   return res;
   
}


int main(int argc, char const *argv[])
{
   // long long a = 3/2;
   float a = 3/2.0;
   cout << a << endl;
   
   
   return 0;
}
