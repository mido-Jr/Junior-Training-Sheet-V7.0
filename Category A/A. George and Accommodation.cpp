/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  int t ;
  cin>>t;
    int room = 0;
  while (t--){
        int a,b;
        cin>>a>>b;

        if(b>=a+2)room++;
  }

  cout<<room;
  return 0;
}
