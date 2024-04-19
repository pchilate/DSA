#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr_size;
    cin >> arr_size;
    int arr[arr_size];
    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }

    int hash_arr[13] = {0};
    for (int i = 0; i < arr_size; i++)
    {
        hash_arr[arr[i]] += 1;
    }

    int query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        int num;
        cin >> num;
        cout << num << " appears " << hash_arr[num] << " times " << endl;
    }

    return 0;
}

// 5
// 1 2 1 3 2
// 5
// 1
// 3
// 5
// 2
// 12