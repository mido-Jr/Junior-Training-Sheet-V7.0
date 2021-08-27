/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    ll l,r;
    cin>>l>>r;
    ll gsd[50]={0};
    ll three[3]={0};


    ll x = 0;
    for (ll i = l; i < r ; ++i) {

            if(__gcd(i,i+1)==1){
                gsd[x]=i;
                gsd[x+1]=i+1;
                x++;
            }
    }
    bool found = false;
    for (int a = 0; a <=x ; ++a) {

        for(int b = a+1 ;b<=x;b++){

            for(int c = b+1 ;c<=x;c++){

                if(__gcd(gsd[a],gsd[b])==1 && __gcd(gsd[a],gsd[c])!=1 && __gcd(gsd[b],gsd[c])==1){
                    three[0]=gsd[a];
                    three[1]=gsd[b];
                    three[2]=gsd[c];
                    found = true;
                    break;
                }
            }
            if(found)break;
        }
        if(found)break;
    }
    if(found) cout<<three[0]<<" "<<three[1]<<" "<<three[2];
    else cout<<-1;

    return 0;
}
