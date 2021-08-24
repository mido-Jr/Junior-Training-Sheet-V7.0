/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char v;
	cin >> v;
	int ans = 0;
	string s;
	while (v != '}')
	{
		cin >> v;
		if (isalpha(v)) {
			s.push_back(v);
		}
	}
	int hash[128] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		hash[s[i]] = 1;
	}
	for (int i = 0; i < 127; i++)
	{
		if (hash[i] == 1) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}

 
