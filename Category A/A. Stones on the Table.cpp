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
	int NUM = 0;
	string ROG;
	cin >> x >> ROG;

	for (int i = 0; i < x; i++)
	{
		if (ROG[i] == ROG[i + 1] && x>i)
		{
			NUM++;
		}
	}

	cout << NUM;

	return 0;

}
 
