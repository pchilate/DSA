#include <bits/stdc++.h>
using namespace std;

// time complexity : O(N*2) --  bcz we are doing linear search to find the single number for each element of the array
// space complexity : O(1)

int findSingleNumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }

        if (count == 1)
            return num;
    }
}

int findSingleNumberB1(int arr[], int n)
{

    //  first we are calculating maximum element from the array to create the vector of that size.
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    // creating vector of size = maximum element of the array
    vector<int> hash(maxi + 1, 0);

    //  creating hashing of the element of the array
    for (int j = 0; j < n; j++)
    {
        hash[arr[j]]++;
    }

    // find out the single occurance element
    for (int k = 0; k < maxi + 1; k++)
    {
        if (hash[k] == 1)
        {
            return k;
        }
    }
    return -1;
}

// time complexity: O(N) + O(N) + O(N) --  1st for find max , 2nd for hashing, 3rd for find single occurence element
// space complecity: O(maxi+1)

int findSingleNumberB2(int arr[], int n)
{
    map<int, int> mapp;

    for (int i = 0; i < n; i++)
    {
        mapp[arr[i]]++;
    }

    for (auto it : mapp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }

    return -1;
}

// time complexity : O(N*logM) + O(M) --- Here time complexity For insertion of element in map data structure is logM, O(N) for traversing to whole array
// O(M) for find single occurance element
// N -- size of array
// M -- size of Map data structure

// space complexity : O(M) -- here were using M size map data structure

int findSingleNumberOPT(int arr[], int n)
{
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

// time complexity: O(N) --  traverse whole array
// space complexity: O(1)

int main()
{
    int n = 3;
    int arr[] = {2, 2, 1};

    // int ans = findSingleNumber(arr, n);
    // int ans = findSingleNumberB1(arr, n);
    // int ans = findSingleNumberB2(arr, n);
    int ans = findSingleNumberOPT(arr, n);
    cout << ans;
    return 0;
}