/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n ;
    cin>>n;
    int lucky = 0;
    while (n){
        if((n%10 == 7) || (n%10 == 4)){
            lucky++;
        }
        n /=10;
    }
    if((lucky == 7 || lucky == 4))cout<<"YES";
    else cout<<"NO";

    return 0 ;
}
