/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, b, d;
	cin >> n >> b >> d;

	int* orange = new int[n];
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> orange[i];

		if (orange[i] <= b) {
			sum += orange[i];
		}

		if (sum > d) {
			ans++;
			sum =0 ;
		}


	}

	cout << ans;

	return 0;
}

 
