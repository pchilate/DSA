#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size, 0);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = largestElement(arr);
    cout << ans;
    return 0;
}

// time complexity: O(N)
// space complexity: O(1)