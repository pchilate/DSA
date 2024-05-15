#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

// time complexity: O(n)
// space complexity: O(1)

// bool isSorted(vector<int> arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// }

// time complexity: O(n*n) --> O(N*2)
// space complexity: O(1)

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size, 0);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bool ans = isSorted(arr);
    if (ans)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}