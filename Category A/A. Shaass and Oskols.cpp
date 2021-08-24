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

	int* birds = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> birds[i];
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		--x;

		if (x != 0)
		{
			birds[x - 1] += y - 1;
		}

		if (x != n - 1) {
			birds[x + 1] += birds[x]-y;
		}

		birds[x] = 0;


	}

	for (int i = 0; i < n; i++)
	{
		cout << birds[i] << endl;

	}

	return 0;
}

 
