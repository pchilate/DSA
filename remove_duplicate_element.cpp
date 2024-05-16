#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &arr)
{
    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            arr[++i] = arr[j];
        }
    }
    return i + 1;
}

// time complexity: O(n)
// space complexity: O(1)

// int removeDuplicate(vector<int> &arr)
// {
//     set<int> my_set;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         my_set.insert(arr[i]);
//     }
//     int k = my_set.size();
//     int j = 0;
//     for (int x : my_set)
//     {
//         arr[j++] = x;
//     }

//     return k;
// }

// // time complexity: O(nlog(n))+ O(n)
// // space complexity: O(n)

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size, 0);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = removeDuplicate(arr);

    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}