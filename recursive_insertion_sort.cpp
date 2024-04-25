#include <bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(int arr[], int j, int n)
{
    if (j == n)
        return;
    int didSwap = 0;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
        didSwap = 1;
    }
    if (didSwap == 0)
        return;
    recursiveInsertionSort(arr, j + 1, n);
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

    recursiveInsertionSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// time complexity :: O(n2) -- worst and avg
// time complexity :: O(n) -- best (if no swap happens)