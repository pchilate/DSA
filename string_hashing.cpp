#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hash[256] = {0};
    string s;
    cin >> s;
    int query;
    cin >> query;

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }

    while (query--)
    {
        char ch;
        cin >> ch;
        cout << ch << " appears " << hash[ch] << " times" << endl;
    }
    // int hash[26] = {0};
    // string s;
    // cin >> s;
    // int query;
    // cin >> query;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i] - 'a'] += 1;
    // }

    // while (query--)
    // {
    //     char ch;
    //     cin >> ch;
    //     cout << ch << " appears " << hash[ch - 'a'] << " times" << endl;
    // }

    return 0;
}

// abcdafffe
// 6
// a
// b
// c
// e
// z
// f