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

	int* Card = new int[x];

	for (int i = 0; i < x; i++)
	{
		cin >> Card[i];

	}


	int A = 0, B = 0;
	int k = x - 1;
	int a = 0, b = 0;
	for (int i = 0; i < k;)
	{

		if (Card[i] > Card[k])
		{
			A += Card[i];
			i++;
			a++;
		}
		else
		{
			A += Card[k];
			k--;
			a++;
		}


		{
			if (Card[i] > Card[k])
			{
				B += Card[i];
				i++;
				b++;
			}
			else
			{
				B += Card[k];
				k--;
				b++;
			}
		}


	}

	if (x % 2 != 0)
	{
		if (a>b)
		{
			B += Card[k];
		}
		else
		{
			A += Card[k];
		}
	}


	cout << A << " " << B;
	return 0;

}
 
