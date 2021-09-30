/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t ;
    cin>>t;
    bool red = false;
    while(t--){
        string s ;
        int a,b;
        cin>>s>>a>>b;
        if(a>=2400 && b>a) {
            red = true;
        }
    }
    if(red) cout<<"YES";
    else cout<<"NO";

    return 0;
}
