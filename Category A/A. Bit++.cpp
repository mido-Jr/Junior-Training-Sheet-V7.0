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
    int x = 0;
    while (t--){
        string s ;
        cin>>s;
        for (int i = 0; i <3 ; ++i) {
            if(s[i]=='+'){
                x++;
                break;
            }
            else if (s[i]=='-'){
                x--;
                break;
            }
        }

    }
    cout<<x;

    return 0;
}
