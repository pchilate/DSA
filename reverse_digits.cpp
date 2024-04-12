#include <bits/stdc++.h>
using namespace std;

int reverseDigit(int n)
{
    int rev_num = 0;
    while (n > 0)
    {
        int rev_digit = n % 10;
        rev_num = (rev_num * 10) + rev_digit;
        n = n / 10;
    }

    return rev_num;
}

int main()
{
    int num;
    cin >> num;
    cout << "This is the output: " << reverseDigit(num);
    return 0;
}