#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (b == 0)
        return a;
    return b;
}
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << "The GCD Of the Given Pair if number is : " << gcd(num1, num2);
    return 0;
}