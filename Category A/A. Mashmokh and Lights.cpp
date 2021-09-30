/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

   int n,m;
   cin>>n>>m;
   int button[n];
   int x = 0; int y = n;

   for (int i = 0; i <m ; ++i)
   {
       cin>>x;
       bool Y = false;
       for (int j = x-1; j < y; ++j){
           button[j]=x;
           Y = true;
       }
       if(Y) y = x-1;
   }
   for (int i = 0; i < n; ++i){
       cout<<button[i]<<" ";
   }
}
