/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string t;
	cin >> s >> t;
	int k = 0;
	int steps = 0;
	for (int i = 0; i < t.length(); i++)
	{
		if (t[i] == s[k])
		{
			steps++;
			k++;
		}
	}
	cout << steps+1;
	return 0;
}

 
