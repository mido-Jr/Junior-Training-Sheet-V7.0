/*
 * This file is a test case you may use and change to check your code
 * Ahmad Elnassag
 */

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	string word;
	cin >> word;
	int up = 0, down = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (isupper(word[i]))
		{
			up++;
		}
		else
		{
			down++;
		}
	}
	if (up > down)
	{
		for (int i = 0; i < word.length(); i++)
		{
			putchar(toupper(word[i]));
		}
	}
	else
	{
		for (int i = 0; i < word.length(); i++)
		{
			putchar(tolower(word[i]));
		}
	}

	return 0;

}
 
