/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long  n, d;
	cin >> n >> d;

	char* plus = new char[n];
	int* packs = new int[n];
	int kid = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> plus[i] >> packs[i];

		if (plus[i] == '+') {
			d += packs[i];
		}
		else
		{
			if (packs[i] > d) {
				kid++;
			}
			else
			{
				d -= packs[i];
			}
		}

	}

	cout << d << " " << kid;
	return 0;
}

 
