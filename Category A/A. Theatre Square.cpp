/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    long long m,n,a;
    long long side1=0,side2=0,asn=0;

    cin>>m>>n>>a;

    if(m%a!=0)side1=m/a+1;
    else side1 = m/a;

    if(n%a!=0)side2=n/a+1;
    else side2 = n/a;

    ans = side1*side2;

    cout<<ans;

    return 0;
}
