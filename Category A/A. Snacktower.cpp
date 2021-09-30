/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin >> n;
	int a = n;
	ll* arr = new ll[n+1];
	bool* vis = new bool[n+1];

	for (int i = 1; i <= n; i++)
	{
		cin>>arr[i];
		vis[i] = false;
	}
	for (int i = 1; i <= n; i++)
	{
		vis[arr[i]] = true;

		while (vis[a]&&a>0)
		{
			cout <<a--<<" ";
		}
		cout << endl;
		
	}

	
	

	return 0;
}

 