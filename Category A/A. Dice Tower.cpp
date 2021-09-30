/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,x;
    cin>>n>>x;
    int y = 7-x;
    bool yes = true;
    while(n--){
        int a,b,c,d;
        cin>>a>>b;

        c= 7-a;
        d= 7-b;

        if(x==c || x==d || y==c || y==d){
            yes = false;
        }

    }
    cout<<((yes)?"YES":"NO");
    return 0;
}
