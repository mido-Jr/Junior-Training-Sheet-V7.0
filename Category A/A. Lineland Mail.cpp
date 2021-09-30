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

	int* pi = new int[n];
	
	for (int  i = 0; i < n; i++)
	{
		cin >> pi[i];	
	}
	
	cout << abs(pi[0] - pi[1]) << " " << abs(pi[0] - pi[n - 1]) << endl;

	for (int i = 1; i < n-1; i++)
	{
		cout << min(abs(pi[i] - pi[i - 1]), abs(pi[i] - pi[i + 1])) << " ";
		cout << max(abs(pi[i] - pi[0]), abs(pi[i] - pi[n - 1])) << endl;
	}

	cout << abs(pi[n - 1] - pi[n - 2]) << " " << abs(pi[n - 1] - pi[0]);

	

	
	return 0;
}

 