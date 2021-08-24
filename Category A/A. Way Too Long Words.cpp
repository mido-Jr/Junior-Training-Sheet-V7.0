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

	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		int len = word.length();

		if (len <= 10) {
			cout << word << endl;
		}
		else
		{
			cout << word[0] << len - 2 << word[len - 1]<<endl;

		}
	}



	return 0;
}

 
