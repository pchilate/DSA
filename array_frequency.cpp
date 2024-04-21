#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {10, 5, 10, 15, 10, 5};
    unordered_map<int, int> mpp;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        mpp[arr[i]]++;
    }

    for (auto x : mpp)
    {
        cout << x.first << " appears " << x.second << " times." << endl;
    }

    return 0;
}