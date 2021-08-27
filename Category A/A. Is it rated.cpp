/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int a[n],b[n];
    bool rated = false;
    for (int i = 0; i <n ; ++i) {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i]){
            rated = true;
            break;
        }
    }
    bool maybe = true;
    sort(a,a+n);
    reverse(a,a+n);
    if(rated) cout<<"rated";
    else {
        for (int i = 0; i < n; ++i) {
            if(a[i]!=b[i]){
                maybe= false;
                cout<<"unrated";
                break;
            }
        }
        if(maybe)cout<<"maybe";
    }
    return 0;
}
