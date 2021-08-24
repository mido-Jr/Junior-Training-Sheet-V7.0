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
	int sum = 0;

	int* coin = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> coin[i];
		sum += coin[i];
	}
	sort(coin, coin + n);
	int number = 0, have = 0;
	while (n--)
	{
		have += coin[n];
		number++;
		if (have > sum / 2)
			break;
	}

	cout << number;

}

 
