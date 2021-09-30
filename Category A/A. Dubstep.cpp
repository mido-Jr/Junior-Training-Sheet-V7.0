/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    string s;
    cin>>s;

    int flag = 1;
    for (int i = 0; i <s.size() ; ++i) {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2] == 'B'){
            i += 2;
            if(!flag) cout<<" ";
            continue;
        }
        else{
            flag = 0;
            cout<<s[i];
        }
    }

    return 0;

}
