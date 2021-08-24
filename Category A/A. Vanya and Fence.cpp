/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	int x, y;
	cin >> x >> y;
	int road = 0;
	int* arr = new int[x];

	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];

		if (arr[i]>y)
		{
			road += 2;
		}
		else
		{
			road++;
		}
	}

	cout << road;

	return 0;

}
 
