/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool yes = false;

	for (int i = 0; i < n; i +=2)
	{
		for (int k = 2; k < n; k +=2)
		{
			if (k + i == n) {
				cout << "YES";
				yes = true;
				break;
			}
		}
		if (yes) {
			break;
		}
	}

	if (!yes) {

		cout << "No";
	}




	return 0;
}

 
