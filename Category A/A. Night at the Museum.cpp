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
	string plastic;
	cin >> plastic;

	int smoves = 0;
	int strl = 0;

	for (int i = 0; i < plastic.length(); i++)
	{
		int index = plastic[i] - 97;
		int walk = abs(strl - index);
		if (walk < 13) {
			smoves += walk;
		}
		else
		{
			smoves += 26 - walk;
		}
		strl = index;
	}

	cout << smoves;

	return 0;
}

 
