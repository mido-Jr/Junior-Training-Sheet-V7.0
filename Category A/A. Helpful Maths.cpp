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
	cin >> s;
	int a = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '+') {

			a++;
		}

	}
	char* arr = new char[a];
	int l = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '+') {

			arr[l] = s[i];
			l++;
		}

	}
	sort(arr, arr + a);

	for (int i = 0; i < a; i++)
	{
		cout << arr[i];
		if (i != a - 1) {
			cout << "+";
		}
	}





	return 0;
}

 
