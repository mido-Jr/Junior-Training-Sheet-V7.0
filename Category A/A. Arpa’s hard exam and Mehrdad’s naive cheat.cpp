/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n==0) cout<<1;
    else if (n>0)
    {
        int units[] = {8,4,2,6};
        n = (n-1)%4;
        cout<<units[n];
    }
    return 0;
}
