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
    int rating [n];
    int score[n];
    for (int i = 0; i <n; ++i) {
            cin>>rating[i];
            score[i]=rating[i];
    }
    sort(score,score+n);
    reverse(score,score+n);
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            if(rating[i]==score[j]){
                cout<<j+1<<' ';
                break;
            }
        }
    }
    return 0;
}
