/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */

#include <string>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    string a, b;
    cin >> a >> b;
    bool eql = true;
    int x = 0, y = 0;

    for (int i = 0; i < a.size(); i++)
    {

        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);

        x = a[i];
        y = b[i];

        if (x > y)
        {
            cout << 1;
            eql = false;
            break;
        }
        else if (y > x)
        {
            cout << -1;
            eql = false;
            break;
        }

    }
    if (eql)cout << 0;


    return 0;
}
