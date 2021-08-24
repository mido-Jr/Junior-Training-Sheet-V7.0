/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */
#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main()
{

    string s;
    cin >> s;
    int size = 1;
    int l = s.length();

    char* x = new char[l];

    for (int i = 0; i < l; i++)
    {
        x[i] = s[i];
    }

    sort(x, x + l);

    for (int i = 1; i < l; i++)
    {
        if (x[i] != x[i - 1])
        {
            size++;
        }

    }
    //cout << size << endl;

    if (size % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
