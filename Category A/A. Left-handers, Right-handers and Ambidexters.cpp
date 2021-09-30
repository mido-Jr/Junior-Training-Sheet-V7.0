/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int l,r,q;
    cin>>l>>r>>q;

    int mn= min(r,l);
    int mx = max(r,l);
    int diff = mx-mn;

    if(q==0)cout<<mn*2;
    else{
        if(diff>q)cout<<(mn+q)*2;
        else{
            q -=diff;
            cout<<(mx+q/2)*2;
        }
    }

    return 0;

}
