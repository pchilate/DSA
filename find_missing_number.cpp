#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int n)
{
    // Linear search approach
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            return i;
    }
}

// time complexity : O(N*2)
// time complexity : O(1)

int findMissingNumberOptimal(int arr[], int n)
{
    // summation approach
    int s1 = 0;
    int s2 = 0;

    s1 = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        s2 += arr[i];
    }

    return s1 - s2;
}

// timecomplexity: O(N)-- bcz we are running the loop to n-1
// spacecomplexity: O(1)

int main()
{
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    // int ans = findMissingNumber(arr, n);
    int ans2 = findMissingNumberOptimal(arr, n);
    cout << ans2;
    return 0;
}