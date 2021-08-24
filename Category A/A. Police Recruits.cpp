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
	int* eve = new int[n];
	int crime = 0;
	int police = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> eve[i];

		if (eve[i]==-1)
		{
			crime++;

			if (police >0 )
			{
				crime--;
				police--;
			}

		}
		else
		{
			police +=eve[i];
		}
	}

	cout << crime;

	return 0;
}

 
