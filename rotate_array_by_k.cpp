#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int k = 2;
    k = k % size;

    // for right rotate
    // reverseArray(arr, 0, size - k - 1);
    // reverseArray(arr, size - k, size - 1);
    // reverseArray(arr, 0, size - 1);

    // for left
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, size - 1);
    reverseArray(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// time complexity: O(N) -- bcz we are running the loop n times
// space complexity: O(1) --  we are not using any extra space