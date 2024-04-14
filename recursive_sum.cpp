#include <bits/stdc++.h>
using namespace std;

// void recursiveSum(int n, int sum)
// {
//     if (n < 1)
//     {
//         cout << sum;
//         return;
//     }
//     recursiveSum(n - 1, sum + n);
// }

// int main()
// {
//     int num;
//     cin >> num;
//     recursiveSum(num, 0);
//     return 0;
// }

int recursiveSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + recursiveSum(n - 1);
}

int main()
{
    int num;
    cin >> num;
    cout << recursiveSum(num);
    return 0;
}
