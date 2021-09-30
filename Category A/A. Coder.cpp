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
    char A= 'C' , B = '.';
    if(n%2==0)cout<<(n/2)*n<<endl;
    else cout<<(n/2)*n+(n/2)+1<<endl;
    for (int i = 0; i <n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<A;
            swap(A,B);
        }
        if(n%2 == 0)
            swap(A,B);
        cout<<endl;
    }
    return 0;
}
