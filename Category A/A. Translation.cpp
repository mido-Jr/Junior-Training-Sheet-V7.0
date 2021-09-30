/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

   string a,b;
   cin>>a>>b;

   reverse(a.begin(),a.end());

   cout<<((a==b)?"YES":"NO");

    return 0;
}
