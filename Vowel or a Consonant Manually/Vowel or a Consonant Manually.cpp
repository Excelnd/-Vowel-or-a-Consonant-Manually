// Vowel or a Consonant Manually.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	char c;
	int lowercaseVowel, uppercaseVowel;

	cout << "Enter an alphabet: ";
	cin >> c;

	lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (lowercaseVowel || uppercaseVowel)
		cout << "\"" << c << "\"" << " is Vowel";
	else
		cout << "\"" << c << "\"" << " is not Vowel";

    return 0;
}

