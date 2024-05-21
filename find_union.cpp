#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> unionArray;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != arr1[i])
            {
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != arr2[j])
            {
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (unionArray.back() != arr1[i])
        {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (unionArray.back() != arr2[j])
        {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }
    return unionArray;
}

int main()
{
    int n = 7;
    int m = 4;
    int arr1[] = {1, 2, 3, 5, 6, 8, 8};
    int arr2[] = {2, 3, 4, 5};
    vector<int> ans = findUnion(arr1, arr2, n, m);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}

// time complexity: O(n+m) --  bcz i will run n times and j will run m times
// space complexity: O(n+m) --  if we consider unionArray List
// space complexity: O(1) --  if we do not consider unionArray List