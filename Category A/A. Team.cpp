/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	int x;
	cin >> x;
	int nuo = 0;
	int three[3];

	for (int i = 0; i < x; i++)
	{
		int bi = 0;
		for (int s = 0; s < 3; s++)
		{
			cin >> three[s];

			if (three[s]==1)
			{
				bi++;
			}

		}
		if (bi>=2)
		{
			nuo++;

		}
	}

	cout << nuo;




	return 0;

}
