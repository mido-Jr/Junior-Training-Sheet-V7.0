/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int n;
    cin>>n;
    string s ;
    for (int i = 1; i <= n; ++i) {
        s += to_string(i);
    }
    cout<<s[n-1];
    return 0;
}
