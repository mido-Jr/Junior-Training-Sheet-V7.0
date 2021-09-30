/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int x = 1;
    bool mid = false;


    for(int i = 0; i < n; i++)
    {
        if(i == (n - 1) / 2) mid = true;

        string a = string((n - x) / 2, '*');
        string d = string(x, 'D');
        cout << a << d << a << endl;

        if(mid) x -= 2;
        else x += 2;
    }

    return 0;

}
