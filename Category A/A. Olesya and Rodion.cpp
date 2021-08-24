/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 600;

int main()
{
	int n, t, lo;
	cin >> n >> t;
	if (n == 1 && t == 10) cout << -1;

	else {
		string x = to_string(t);
		char o = '0';

		if (t % 10 == 0) lo = n - 2;
		else lo = n - 1;


		while (lo--) x.push_back(o);

		cout << x;
	}
	return 0;
}

 
