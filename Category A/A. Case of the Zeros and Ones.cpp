/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    string s ;
    cin>>n>>s;

    int zero = 0 , one = 0;
    for (int i = 0; i <n ; ++i) {
          if(s[i]=='0')zero++;
          else one++;
    }

    cout<<n-min(zero,one)*2;

    return 0;
}
