#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;

    for (int i = 1; i <= 7; i++)
    {
        arr.push_back(i);
    }

    reverse(arr.begin(), arr.end());
    // Accessing elements using iterators
    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    reverse(arr.begin(), arr.begin() + 3);
    // Accessing elements using iterators
    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    reverse(arr.begin() + 3, arr.end());
    // Accessing elements using iterators
    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // // Accessing elements using iterators
    // for (auto it = arr.begin() + 3; it != arr.end(); ++it)
    // {
    //     cout << *it << " ";
    // }

    return 0;
}