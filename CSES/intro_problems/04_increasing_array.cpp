#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
   long long t;
   cin >> t;
   vector<long long> nums;

   while(t-->0) {
      long long n;
      cin >> n;
      nums.push_back(n);
   }

   long long sum = 0;
   for (long long i = 0; i < nums.size()-1; ++i)
   {
      if(nums.at(i) > nums.at(i+1)) {
         long long need = nums.at(i)-nums.at(i+1); // every element is at least as large as the previous element
         sum += need; // moves 
         nums.at(i+1) += need; // modify the small num for next iteration; (i, i+1)

      }
   }
   cout << sum << endl;
   

   return 0;
}
