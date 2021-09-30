/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int bags ;
    cin>>bags;
    int Cookies[bags];
    int ways = 0;
    int CookiesNumbers = 0;
    for (int i = 0; i <bags ; ++i) {
        cin>>Cookies[i];
        CookiesNumbers +=Cookies[i];
    }
    for (int i = 0; i < bags; ++i) {
        if((CookiesNumbers - Cookies[i]) %2 == 0)ways++;
    }
    cout<<ways;
    return 0;
}
