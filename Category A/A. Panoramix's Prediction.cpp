/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool isprime(int n){

    if(n<=1){
        return false;
    }
    for (int i = 2; i <n ; ++i) {
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {

    int n,m;
    cin>>n>>m;

    int x = 0;
    for (int i = n+1; i <=m; ++i)
    {
         if(isprime(i))
         {
             x = i;
             break;
         }
    }

    cout<<((m==x)? "YES" : "NO");

    return 0;
}
