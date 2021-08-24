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
	int A = 0, D = 0;
	char* arr = new char[x];

	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];

		if (arr[i] == 'A')
		{
			A++;
		}
		else
		{
			D++;
		}
	}

	if (A > D) {
		cout << "Anton";
	}
	else if (D > A) {

		cout << "Danik";
	}
	else
		cout << "Friendship";

	return 0;

}
