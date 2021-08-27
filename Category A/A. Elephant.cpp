/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin>>x;
    int step = 0;

    if(x>5){
        step = x/5;
        x = x%5;
    }

    if(x<=5&& x>0) step++;

    cout<<step;
    return 0;
}
