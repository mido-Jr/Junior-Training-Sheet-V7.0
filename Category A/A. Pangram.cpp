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
	string s;
	cin >> s;
	int x[26] = {0};

	if (n < 26) {
		cout << "No";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			s[i] = tolower(s[i]);
			x[s[i] - 97]++;
		}
		int alp = 0;
		for (int i = 0; i < 26; i++)
		{
			if (x[i] > 0) {
				alp++;
			}
		}
		cout << (alp >= 26 ?"Yes" : "NO");
	}



	return 0;
}

 
