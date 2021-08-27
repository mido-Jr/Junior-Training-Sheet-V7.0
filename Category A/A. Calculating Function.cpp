/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    long long n;
    cin>>n;

    if(n%2==0)cout<<n/2;
    else{
        n++;
        cout<<(n/2)*-1;
    }

    return 0;
}
