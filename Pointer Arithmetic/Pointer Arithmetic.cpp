// Pointer Arithmetic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	const int NSTRINGS = 5;
	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

	string* pTexts = texts;

	pTexts++;

	cout << *pTexts << endl;

	string* pEnd = &texts[NSTRINGS];

	pTexts = &texts[0];
	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
	}


	pTexts = &texts[0];

	long elements = pEnd - pTexts;

	cout << elements << endl;

	pTexts = &texts[0];

	pTexts += NSTRINGS / 2;

	cout << *pTexts << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
