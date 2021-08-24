/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	int col;
	cin >> col;

	int* array = new int[col]; // Not Important Now

	for (int i = 0; i < col; i++)
	{
		cin >> array[i];
	}

	sort(array, array + col);

	for (int i = 0; i < col; i++)
	{
		cout<< array[i]<<" ";
	}


	return 0;

}
