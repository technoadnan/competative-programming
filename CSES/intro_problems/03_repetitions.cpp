#include <iostream>
using namespace std;

/* 
 * T.C -> O(n) 
 * S.C -> O(1)
*/

int main() {
   string ans;
   int maxi {0}; 
   int curr {1}; // any arr w/o repeating char consist of 1 char 
   
   cin >> ans;

   for (int i = 0; i < ans.length()-1; i++)
   {
      if(ans[i] == ans[i+1]) {
         curr++; // find same char 
      } else {
         maxi = max(maxi, curr); // as soon as it doesn't find the same char
         curr = 1; // repeated sequence got broken
      } 
   }
   // bbaaa
   // if not written; the last 3 repeating char (aaa) will be ignored 
   // to avoid, last check is needed
   maxi = max(maxi, curr); 
 

   cout << maxi << endl;
}