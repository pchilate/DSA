#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n)
{
    int temp[n];
    for (int i = 1; i < n; i++)
    {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];

    for (int j = 0; j < n; j++)
    {
        cout << temp[j] << " ";
    }
}

// time complexity: O(n) --  bcz we are running loop n times
// space complexity: O(n) -- bcz we are using another temp array

void newLeftRotate(int arr[], int n)
{
    int f_ele = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            arr[i] = f_ele;
        }
        else
        {
            arr[i] = arr[i + 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// time complexity : O(n) -- bcz we are running the loop n times
// space complexity : O(1) --  Here we are not using any extra space

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // leftRotate(arr, size);
    newLeftRotate(arr, size);

    return 0;
}