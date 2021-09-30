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

   int  x = 0;
   int eq[t*3];

   for (int i = 0; i < t*3; ++i) {
        cin>>eq[i];
   }

   for (int i = 0; i < 3; ++i) {
        for (int j = i; j < t*3; j+=3) {
            x += eq[j];
        }
        if(x!=0){
           // cout<<x<<endl;
            cout<<"NO";
            break;
        }
   }

   if(x==0)cout<<"YES";

    return 0;
}
