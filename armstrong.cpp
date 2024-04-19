#include <bits/stdc++.h>
using namespace std;

void checkArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum = sum + (last_digit * last_digit * last_digit);
        n = n / 10;
    }
    if (temp == sum)
        cout << "True";
    else
        cout << "False";
}

int main()
{
    int num;
    cin >> num;
    checkArmstrong(num);
    return 0;
}