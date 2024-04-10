#include <bits/stdc++.h>
using namespace std;

int main()
{

    int age;
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "your age is 18";
        break;

    case 20:
        cout << "your age is 20";
        break;

    case 25:
        cout << "your age is 25";
        break;

    default:
        cout << "I don't know your age";
        break;
    }

    return 0;
}