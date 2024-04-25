#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
    int didSwap = 0;
    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }
    if (didSwap == 0)
        return;
    recursiveBubbleSort(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    recursiveBubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// time complexity :: O(n2) -- worst and avg
// time complexity :: O(n) -- best (if no swap happens)