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
	bool yes = true;
	char** ary = new char* [n];
	for (int i = 0; i < n; ++i) {
		ary[i] = new char[n];
	}
	for (int i = 0; i < n; i++){
		for (int k = 0; k < n; k++){
			cin >> ary[i][k];
			//cout << ary[i][k] << " ";
		}
	}
	char A = ary[0][0];
	char B = ary[0][1];
	if (A == B)cout << "NO";
	else
	{


		int y = 0, z = n - 1;
		for (int x = 0; x < n; x++)
		{
			for (; y <= x && z >= x; y++, z--)
			{
				if (A != ary[x][y] || A != ary[x][z]) {
					cout << "NO";
					yes = false;
					break;
				}
				for (int q = 0; q < n; q++)
				{
					if (q != y && q != z) {
						if (B != ary[x][q]) {
							cout << "NO";
							yes = false;
							break;
						}
					}

				}
			}

			if (!yes)break;
			if (x == (n / 2)) swap(y, z);
		}
		if (yes)cout << "YES";
	}
	return 0;
}

 
