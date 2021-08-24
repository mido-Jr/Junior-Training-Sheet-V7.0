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
	int a=1, b=0;
	string x, y,temp; cin >> x; n--;
	while (n--)
	{
		cin >> temp;
		if (x == temp) a++;
		else {
			b++;
			y = temp;
		}

	}
	if (a > b)cout << x;
	else cout << y;

	return 0;
}

 
