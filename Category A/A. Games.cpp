/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}

	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)
		{
			if (i != k && a[i] == b[k]) {
				ans++;
			}
		}
	}

	cout << ans;

	return 0;
}

 
