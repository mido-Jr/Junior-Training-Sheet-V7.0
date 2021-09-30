/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    char x ;
    cin>>s;

    for (int i = 0; s[i] ; ++i) {
        x = tolower(s[i]);
        if(x != 'a' && x != 'o' && x != 'y' && x != 'e' && x != 'u'  && x != 'i'){
            cout<<'.'<<x;
        }
    }

    return 0;
}
