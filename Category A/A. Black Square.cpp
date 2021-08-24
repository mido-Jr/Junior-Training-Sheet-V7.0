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
	int Square[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> Square[i];
	}

	string process;
	cin >> process;
	int ans = 0;
	for (int i = 0; i < process.length(); i++)
	{
		if (process[i] == '1')
		{
			ans += Square[0];
		}
		else if (process[i] == '2') {
			ans += Square[1];
		}
		else if (process[i] == '3') {
			ans += Square[2];
		}
		else if (process[i] == '4') {
			ans += Square[3];
		}
	}

	cout << ans;

	return 0;
}

 
