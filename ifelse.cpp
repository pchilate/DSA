#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;

    cin >> marks;

    if (marks < 25)
    {
        cout << 'F';
    }
    else if (marks <= 50)
    {
        cout << 'E';
    }
    else if (marks <= 75)
    {
        cout << 'B';
    }
    else if (marks > 75 && marks <= 100)
    {
        cout << 'A';
    }
    else
    {
        cout << "You are failed!";
    }

    return 0;
}