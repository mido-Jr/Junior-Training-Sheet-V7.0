/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int n;
    cin>>n;

    char pair[n][n];
    int cake = 0;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>pair[i][j];
        }
    }

    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = j+1; k < n; ++k) {
                if(pair[i][j]=='C'){
                    if(pair[i][j] == pair[i][k])cake++;
                }
            }
        }
    }

    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = j+1; k < n; ++k) {
                if(pair[j][i]=='C'){
                    if(pair[j][i] == pair[k][i])cake++;
                }
            }
        }
    }

    cout<<cake;

    return 0 ;
}
