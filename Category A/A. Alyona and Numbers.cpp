/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    long long n,m;
    cin>>n>>m;

    long long a[5] ={0};
    long long b[5]={0};

    for (int i = 1; i <= n; ++i) {
        a[i%5]++;
    }

    for (int j = 1; j <= m; ++j) {
        b[j%5]++;

    }

    cout<<(a[0]*b[0]+a[1]*b[4]+a[2]*b[3]+a[3]*b[2]+a[4]*b[1]);


    return 0;
}
