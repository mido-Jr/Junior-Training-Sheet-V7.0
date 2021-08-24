/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int k, r;
	cin >> k >> r;

	int x = 1;

	while (((x * k) % 10 != r) and ((x * k) % 10 != 0))
	{

		x++;

	}

	cout << x;

	return 0;
}
