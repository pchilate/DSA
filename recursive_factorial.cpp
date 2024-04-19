#include <bits/stdc++.h>
using namespace std;

int recursiveFactiorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * recursiveFactiorial(n - 1);
}

int main()
{
    int num;
    cin >> num;
    cout << recursiveFactiorial(num);
    return 0;
}
