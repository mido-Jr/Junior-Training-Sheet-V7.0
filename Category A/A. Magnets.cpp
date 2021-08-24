/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int groups = 1;
	int *arr = new int[n];
	cin >> arr[0];
	for (int i = 1; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] != arr[i - 1])
		{
			groups++;
		}

	}
	cout << groups;
	return 0;

}
 
