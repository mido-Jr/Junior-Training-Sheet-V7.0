/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int N;
    cin>>N;
    char seats [N][5];
    bool Not_found = true;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin>>seats[i][j];
        }
        for (int r = 0; r < 4; ++r) {
            if(seats[i][r]=='O' && seats[i][r+1] =='O' && Not_found ){
                seats[i][r] = '+' ;
                seats[i][r+1] ='+';
                Not_found = false;
            }
        }
    }
    if(!Not_found){
        cout<<"YES"<<endl;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < 5; ++j) {
                cout<<seats[i][j];
            }
            cout<<endl;
        }
    }
    else cout<<"NO";
    return 0 ;
}
