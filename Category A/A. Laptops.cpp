/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    vector < pair<ll ,ll> > vect ;

    ll n;
    cin>>n;
    bool happy = false;
    ll a,b;
    for (ll i = 0; i < n ; ++i) {
        cin>>a>>b;
        vect.push_back(make_pair(a,b));
    }

    sort(vect.begin(),vect.end());

    for (ll j = 1; j <n ; ++j) {

        if(vect[j-1].second > vect[j].second ){
            cout<<"Happy Alex";
            happy = true;
            break;
        }
    }

    if(!happy)
        cout<<"Poor Alex";

    return 0;

}
