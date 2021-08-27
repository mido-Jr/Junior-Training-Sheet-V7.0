/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    char x[4][4];

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin>>x[i][j];
        }
    }

    int loop1=3;
    int a=0,z=1;

    while(loop1--)
    {
        int loop2 = 3;
        int b= 0,y=1;
        while(loop2--)
        {
            int hash=0,dot=0;
            for (int i = a; i <= z; ++i)
            {
                for (int j = b; j <= y; ++j)
                {
                    if(x[i][j]=='#') hash++;
                    else dot++;
                }
            }
            if(hash>=3 || dot>=3)
            {
                cout<<"YES";
                return 0;
            }
            b++;y++;
        }
        a++;z++;
    }
    cout<<"NO";
    return 0;
}
