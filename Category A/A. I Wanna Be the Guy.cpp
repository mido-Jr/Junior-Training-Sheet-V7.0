/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	int n;
	cin >> n;

	int* x = new int[n+1];

	for (int i = 0; i < n+1; i++)
	{
		x[i] = 0;
	}

	int p,c; cin >> p;
	for (int i = 0; i < p; i++)
	{
		cin >> c;
		x[c]++;
	}
	int y, z; cin >> y;
	for (int i = 0; i < y; i++)
	{
		cin >> z;
		x[z]++;
	}

	int f = 0;
	for (int i = 1; i < n + 1; i++)
		if (x[i] == 0)f = 1;


	if (f == 0)cout <<"I become the guy.";
	else cout << "Oh, my keyboard!";




	return 0;
}

 
