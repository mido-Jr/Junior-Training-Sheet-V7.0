/*
 * This file is a test case you may use and change to check your code
 */
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int w, y;
	cin >> y >> w;

	int d = max(y, w);

	int ans = 0;

	for (int i = d; i <= 6; i++)
	{
		ans++;
	}
	int div = 1;

	for (int i = 1; i <=6; i++)
	{
		if (6 % i == 0 && ans % i == 0)
		{
			div = i;

		}
	}
	//cout << ans << " " << div<<" "<<d;
	cout << ans / div << "/" << 6 / div;

	return 0;
}

 
