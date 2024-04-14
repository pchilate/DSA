#include <bits/stdc++.h>
using namespace std;

// void printLinearlyTillN(int i, int n)
// {
//     if (i == n)
//     {
//         cout << i << endl;
//         return;
//     }
//     cout << i << endl;
//     printLinearlyTillN(i + 1, n);
// }

// int main()
// {
//     int num;
//     cin >> num;
//     printLinearlyTillN(1, num);
//     return 0;
// }

//  using backtracking

void printLinearlyTillN(int i, int n)
{
    if (i == 0)
    {
        return;
    }
    printLinearlyTillN(i - 1, n);
    cout << i << endl;
}

int main()
{
    int num;
    cin >> num;
    printLinearlyTillN(num, num);
    return 0;
}

// Print in opposite N -- 1

// void printLinearlyTillN(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << n << endl;
//     n--;
//     printLinearlyTillN(n);
// }

// int main()
// {
//     int num;
//     cin >> num;
//     printLinearlyTillN(num);
//     return 0;
// }