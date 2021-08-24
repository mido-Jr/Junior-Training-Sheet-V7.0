/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n, k;
	cin >> n >> k;
	if (n % 2 == 0)
	{
		if (k > n / 2)
			cout << (k - (n / 2)) * 2;
		else
			cout << k * 2 - 1;
	}
	else
		if (k > n / 2 + 1)
			cout << (k - ((n / 2) + 1)) * 2;
		else cout << k * 2 - 1;

	return 0;
}

 
