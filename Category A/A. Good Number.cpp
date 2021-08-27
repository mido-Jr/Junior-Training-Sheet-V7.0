/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,k;
    cin>>n>>k;
    int numbers[n];
    bool visit[k+1];
    int ans = n;

    for (int i = 0; i < n; ++i) {

        cin>>numbers[i];
        int x = numbers[i];
        memset(visit,false,k+1);

        while (x){
            int y = x%10;
            visit[y]= true;
            x /=10;
        }

        for (int j = 0; j < k+1; ++j) { 
            if(!visit[j]){
                ans--;
                break;
            }
        }

    }
    cout<<ans;

    return 0;
}
