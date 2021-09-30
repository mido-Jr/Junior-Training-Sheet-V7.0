/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int n;
    cin>>n;
    bool found = false;
    int seq[n];
    for (int i = 0; i <n ; ++i) {
        cin>>seq[i];
    }
    sort(seq,seq+n);
    for (int i = 1; i < n; ++i) {
        if(seq[i]>seq[0]){
            found = true;
            cout<<seq[i];
            break;
        }
    }
    if(!found)cout<<"NO";

    return 0 ;
}
