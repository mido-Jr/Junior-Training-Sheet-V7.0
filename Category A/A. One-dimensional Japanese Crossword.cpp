/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    string s;
    cin>>s;

    int blocks = 0;
    int sizes [100]={0};
    int size_index = 0;
    for (int i = 1; i <= n; ++i) {
        if(s[i-1]=='B'){
            sizes[size_index]++;
            if(s[i]=='W' || s[i]=='\0'){
                blocks++;
                size_index++;
            }
        }
    }
    cout<<blocks<<endl;
    for (int j = 0; j <size_index ; ++j) {
        cout<<sizes[j]<<" ";
    }

    return 0;

}
