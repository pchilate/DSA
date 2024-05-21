#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    int ele;
    cin >> size;
    cin >> ele;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = linearSearch(arr, size, ele);
    cout << ans;
    return 0;
}

// time complexity: O(N) -- Bca we are traversing whole array
// space complexit: O(1)