#include <bits/stdc++.h>
using namespace std;

int recursiveFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

int main()
{
    int num;
    cin >> num;
    cout << recursiveFibonacci(num);
    return 0;
}

// time complexity --->  o(2^n) --- > exponential