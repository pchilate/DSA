#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> arr)
{
    int largest = arr[0];
    int s_largest = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && arr[i] > s_largest)
        {
            s_largest = arr[i];
        }
    }
    return s_largest;
}

// time complexity : O(N)
// space complexity : O(1)

// int secondLargestElement(vector<int> arr)
// {
//     int largest = arr[0];
//     int s_largest = -1;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] > s_largest && arr[i] < largest)
//         {
//             s_largest = arr[i];
//         }
//     }

//     return s_largest;
// }

// time complexity: O(N + N) --> O(2N)
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

    int ans = secondLargestElement(arr);
    cout << "Second Largest Element without Sorting : " << ans;
    return 0;
}
