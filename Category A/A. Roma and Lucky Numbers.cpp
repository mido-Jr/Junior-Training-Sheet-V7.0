/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

   int n,k;
   cin>>n>>k;
   int LuckyCounter =0;
   string s;
   while (n--)
   {
       int lucky(0);
       cin >> s;
       for (size_t i = 0; i < s.length(); ++i)
       {
           if (s[i] == '4' || s[i] == '7')
           {
               lucky += 1;
           }
       }
       if (lucky <= k)
       {
           LuckyCounter += 1;
       }
   }
   cout<<LuckyCounter;

    return 0;
}
