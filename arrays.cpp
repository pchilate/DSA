#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    arr[3] = 10;
    cout << "the last value of 4th element in array is : " << arr[4] << endl;

    int new_arr[3][4];
    cin >> new_arr[0][0] >> new_arr[0][1];

    cout << "the value of first element in 2d array is :" << new_arr[0][3];

    return 0;
}