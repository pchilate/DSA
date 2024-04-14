#include <bits/stdc++.h>
using namespace std;

bool reverseString(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }

    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return reverseString(i + 1, s);
}

int main()
{
    string s = "madsm";
    cout << reverseString(0, s);
    return 0;
}