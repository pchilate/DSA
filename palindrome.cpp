#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n)
{
    int temp = n;
    int rev_num = 0;
    while (n > 0)
    {
        int rev_digit = n % 10;
        rev_num = (rev_num * 10) + rev_digit;
        n = n / 10;
    }
    if (temp == rev_num)
        cout << "The number is palindrome";
    else
        cout << "The number is not palindrome";
}

int main()
{
    int num;
    cin >> num;
    checkPalindrome(num);
}