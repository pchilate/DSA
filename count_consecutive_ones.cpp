#include <bits/stdc++.h>
using namespace std;

int countConsecutiveOnes(int arr[], int n)
{
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        max_count = max(max_count, count);
    }

    return max_count;
}

// time complexity: O(N) -- bcz we are traversing the whole array
// spcae complexity: O(1)

int main()
{
    int n = 7;
    int arr[] = {1, 0, 1, 1, 0, 1, 1};
    int ans = countConsecutiveOnes(arr, n);
    cout << ans;
    return 0;
}