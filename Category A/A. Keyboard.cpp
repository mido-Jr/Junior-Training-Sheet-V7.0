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
	string key = "qwertyuiopasdfghjkl;zxcvbnm,./";

	char r;
	cin >> r;

	string input;
	cin >> input;

	int x = input.size();

	if (r == 'R') {
		int ci = 0;
		while(x--){

			for (int i = 0; i < 30; i++)
			{
				if (input[ci] == key[i]) {
					cout << key[i - 1];
					break;
				}
			}
			ci++;
		}
	}
	if (r == 'L') {
		int ci = 0;
		while (x--) {

			for (int i = 0; i < 30; i++)
			{
				if (input[ci] == key[i]) {
					cout << key[i + 1];
					break;
				}
			}
			ci++;
		}
	}




}

 
