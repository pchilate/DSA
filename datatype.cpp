#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int
    int x;
    // long
    long y;
    // long long
    long long z;
    // float
    float f;
    float f1;
    // double
    double d;
    double d1;
    // long double
    long double ld;
    // string and getline
    string str;

    cin >> x;
    cin >> y;
    cin >> z;
    cin >> f;
    cin >> f1;
    cin >> d;
    cin >> d1;
    cin >> ld;
    cin.ignore();
    getline(cin, str);

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << f << endl;
    cout << f1 << endl;
    cout << d << endl;
    cout << d1 << endl;
    cout << ld << endl;
    cout << str;
    return 0;
}