/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	int n, m;
	cin >> n >> m;
	int loop = m * n;
	bool white = true;
	char x;
	while (loop--) {
		cin >> x;
		if (x == 'C' || x == 'M' || x == 'Y') {
			white = false;
		}
	}
	if (white)cout << "#Black&White";
	else cout << "#Color";

	return 0;
}

 
