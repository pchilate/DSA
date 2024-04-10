#include <bits/stdc++.h>
using namespace std;

// return
// parameterized
// void

// void printName(string name){
//     cout << "Hey " << name << endl;
// }

// int sum(int num1, int num2)
// {
//     int num3 = num1 + num2;
//     return num3;
// }

// int maxx(int num1, int num2){
//     if (num1>num2) return num1;
//     return num2;
// }

// int main()
// {
//     // string name;
//     // cin >> name;
//     // printName(name);

//     int num1, num2;
//     cin >> num1 >> num2;
//     // int res = sum(num1, num2);
//     // cout << res;
//     int res = maxx(num1, num2);
//     cout << res;

//     return 0;
// }

// pass by value

// void doSomething(int num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main(){
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }

// pass by reference

// void doSomething(int &num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main()
// {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }

// example of array

void doSomething(int arr[], int n)
{
    arr[0] += 200;
    cout << "The value from doSomething: " << arr[0] << endl;
}

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout << "The value from main: " << arr[0] << endl;

    return 0;
}
