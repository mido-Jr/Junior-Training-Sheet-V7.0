/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

       string a,b ,x;
       cin>>a>>b;
       int len = a.size(),i=0;
       while(len--){
           if(a[i]%10==b[i]%10) x.push_back('0');
           else x.push_back('1');
           i++;
       }
       cout<<x;

    return 0;

}
