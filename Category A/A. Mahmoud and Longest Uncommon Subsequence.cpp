/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	if (a == b) {
		cout << -1;
	}
	else
		cout << max(a.size(), b.size());

	return 0;
}

 
