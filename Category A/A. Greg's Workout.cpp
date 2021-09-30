/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    int a,b,c;
    int x=0,y=0,z=0,mx=0;
    bool one = false ,two = false;
    if(t%3==1) {
        one = true;
        cin>>a;
        x +=a;
        t--;
    }
    else if (t%3==2){
        two = true;
        cin>>a>>b;
        x +=a;
        y +=b;
        t -=2;
    }

    while (t){
        if(one){
            cin>>b>>c>>a;
            x +=a;
            y +=b;
            z +=c;
            t -= 3;
        }
        else if (two){
            cin>>c>>a>>b;
            x +=a;
            y +=b;
            z +=c;
            t -= 3;
        }
        else{
            cin>>a>>b>>c;
            x +=a;
            y +=b;
            z +=c;
            t -= 3;
        }

    }
    mx= max(x,max(y,z));

    if(mx==z)cout<<"back";
    else if (mx==y)cout<<"biceps";
    else cout<<"chest";

    return 0;

}
