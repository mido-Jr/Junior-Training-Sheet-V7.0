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
	int pro = 0, math = 0, pe = 0;

	int* childern = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> childern[i];

		if (childern[i] == 1) {
			pro++;
		}
		else if (childern[i] == 2)
		{
			math++;
		}
		else
		{
			pe++;
		}

	}
	int teams = 0;
	if (pe > 0 && math > 0 && pro > 0) {
		teams = min(min(pe, pro), math);
	}

	if (teams > 0) {


		int* index_p = new int[teams];
		int* index_m = new int[teams];
		int* index_e = new int[teams];

		int a = 0, b = 0, c = 0;
		for (int i = 0; i < n; i++)
		{


			if (childern[i] == 1 && a < teams) {
				index_p[a] = i+1;
				a++;
			}
			else if (childern[i] == 2  && b < teams)
			{
				index_m[b] = i+1;
				b++;

			}
			else if (childern[i] == 3 && c < teams)
			{
				index_e[c] = i+1;
				c++;

			}


		}

		cout << teams << endl;
		for (int i = 0; i < teams; i++)
		{
			cout << index_e[i] << " " << index_m[i] << " " << index_p[i] << endl;
		}
	}
	else
	{
		cout << teams;
	}
	return 0;
}

 
