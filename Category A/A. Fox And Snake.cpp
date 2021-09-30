/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            bool haveSnake = false;
            if(i % 2 == 1) haveSnake = true;
            else
            {
                if(i % 4 == 2) haveSnake = (j == m); // think why choose 4
                if(i % 4 == 0) haveSnake = (j == 1); // we make a pattern 2 6 10 14 18 that for end '#'
            }
            cout << (haveSnake ? "#" : ".");
        }
        cout << endl;
    }
    return 0;

}
