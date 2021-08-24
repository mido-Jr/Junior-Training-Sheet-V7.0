/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	int a, b;
	cin >> a >> b;
	int num = 0;
	while (b >= a)
	{
		num++;
		a *= 3;
		b *= 2;
	}

	cout << num;


	return 0;

}
