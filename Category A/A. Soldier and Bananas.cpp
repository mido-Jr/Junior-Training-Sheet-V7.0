/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int k,w,n;
    cin>>k>>w>>n;
    int dollar = 0;
    for (int i = 1; i <=n ; ++i) {
           dollar += i*k;
    }

    if(dollar>w) cout<<dollar-w;
    else cout<<0;

    return 0;

}
