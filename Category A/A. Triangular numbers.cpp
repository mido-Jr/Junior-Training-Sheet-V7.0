/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int Tn;
    cin>>Tn;

    for (int n = 1; n <= Tn; n++)
    {
        if (n * (n + 1) / 2 == Tn)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;

}
