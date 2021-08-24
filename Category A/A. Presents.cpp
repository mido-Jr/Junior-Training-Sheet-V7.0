/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* pi = new int[n];
	int* res = new int[n];
	for (int  i = 0; i < n; i++)
	{
		cin >> pi[i];
		res[pi[i] - 1] = i + 1;

	}

	for (int i = 0; i < n; i++)
	{
		cout << res[i] << " ";
	}

	return 0;
}

 
