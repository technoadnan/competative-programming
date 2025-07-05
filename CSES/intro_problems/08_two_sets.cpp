#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a{};
    vector<int> s1;
    vector<int> s2;

    long long sum1 {};
    long long sum2 {};

    if (n % 2 == 0)
    {
        for (size_t i = 1; i <= n; i++)
        {
            a.push_back(i);
        }

        int left = 0;
        int right = n-1;

        while (left < right)
        {

            if (left % 2 == 1)
            {
                s1.push_back(a.at(left));
                s1.push_back(a.at(right));
                sum1 += a.at(left) + a.at(right);
            }
            else
            {
                s2.push_back(a.at(left));
                s2.push_back(a.at(right));
                sum2 += a.at(left) + a.at(right);
            }

            left++;
            right--;
        }
    }
    else
    {
        for (size_t i = 1; i <= n; i++)
        {
            a.push_back(i);
        }

        int left = 0;
        int right = n - 2;

        while (left < right)
        {
            // int left = 0;
            // int right = n - 2;
            int last = n - 1;

            if (left % 2 == 1)
            {
                s1.push_back(a.at(left));
                s1.push_back(a.at(right));
            }
            else
            {
                s2.push_back(a.at(left));
                s2.push_back(a.at(right));
            }
            left++;
            right--;
        }

        if(s1.size() > s2.size()) {
            s2.push_back(n);
        } else if( s2.size() > s1.size()) {
            s1.push_back(n);
        } 
        else {
            s1.push_back(n); // default 
            sum1 += n;
        }
    }

    if(sum1 == sum2) {
        cout << "YES" << endl;
        cout << s1.size() << endl;
        for(int n: s1) {
            cout << n << " ";
        }
        cout << endl;


        cout << s2.size() << endl;
        for(int n: s2) {
            cout << n << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}