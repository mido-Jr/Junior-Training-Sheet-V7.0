/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

   int a,b;
   cin>>a>>b;
   int A_win = 0 , B_win = 0 , draw = 0;
   int die[]={1,2,3,4,5,6};

    for (int i = 0; i < 6; ++i) {
        int x = die[i];

        if(abs(a-x) < abs(b-x)) A_win++;
        else if (abs(a-x) > abs(b-x)) B_win++;
        else draw++;

    }
    cout<<A_win<<" "<<draw<<" "<<B_win;
    return 0 ;
}
