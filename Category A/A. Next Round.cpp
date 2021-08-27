/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	--k;
	int* place = new int[n];
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> place[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (place[i] >= place[k]&&(place[i]>0||place[k]>0)) {
			ans++;
		}
	}

	cout << ans;


	return 0;
}
