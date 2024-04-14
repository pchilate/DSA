#include <bits/stdc++.h>
using namespace std;

void printNameRecurr(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "pratik" << endl;
    
    n--;
    printNameRecurr(n);
}

int main()
{
    int num;
    cin >> num;
    printNameRecurr(num);
    return 0;
}