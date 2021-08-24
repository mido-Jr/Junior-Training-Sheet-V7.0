/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	int mtx[5][5];
	int x, y;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> mtx[i][j];

			if (mtx[i][j]==1)
			{
				x = i+1;
				y = j+1;
				break;

			}
		}

	}

	cout << abs(x - 3) + abs(y - 3);


	return 0;

}
