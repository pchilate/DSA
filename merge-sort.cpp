#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> merge_array(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }

    return arr;
}

vector<int> mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return arr;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge_array(arr, low, mid, high);
    return arr;
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
    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}