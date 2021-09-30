/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  int a,b;
  cin>>a>>b;

  int dayes = min(a,b);
  int same = (max(a,b)-min(a,b))/2;

  cout<<dayes<<" "<<same;
  return 0;
}
