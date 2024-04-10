#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count = (int)(log10(n) + 1);

    return count;
}
// time-complexity : O(log10(n))

// int countDigits(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         // int digit = n % 10;
//         count++;
//         n = n / 10;
//     }

//     return count;
// }
// time-complexity : O(n)
int main()
{
    int num;
    cin >> num;
    cout << "The Count of Digits is:  " << countDigits(num);
}