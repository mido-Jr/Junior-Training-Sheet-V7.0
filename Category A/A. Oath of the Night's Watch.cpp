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

	int* lord = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> lord[i];
	}
	sort(lord, lord + n);
	int support = 0;

	for (int i = 1; i < n-1; i++)
	{
		if (lord[i] > lord[0] && lord[i] < lord[n - 1]) {
			support++;
		}

	}
	cout << support;
	return 0;
}

 
