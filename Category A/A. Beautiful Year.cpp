/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int y ;
    cin>>y;
    y++;
    for (int i = y; i <= 9999; ++i) {

        if((i%10 != (i/10)%10) && (i%10 != (i/100)%10) && (i%10 != (i/1000)%10))

            if(((i/10)%10 != (i/100)%10) && ((i/10)%10 !=(i/1000)%10))

                if(((i/100)%10 != (i/1000)%10))
                {
                    cout<<i<<endl;
                    break;
                }
    }


    return 0 ;
}
