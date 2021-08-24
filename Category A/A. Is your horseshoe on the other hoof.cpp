/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int arr[4];
	int Number = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];

	}
	sort(arr, arr + 4);
	for (int i = 1; i < 4; i++)
	{

		if (arr[i] == arr[i - 1])
		{
			Number++;
		}
	}
	cout << Number;

	return 0;
}
