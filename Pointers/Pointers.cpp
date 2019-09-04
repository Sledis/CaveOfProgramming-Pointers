// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void manipulate(double* value) {
	cout << "2. Value of double in manipulate:" << *value << endl;
	*value = 10;
	cout << "3. Value of double in manipulate:" << *value << endl;
}

int main()
{
	int nValue = 8;

	int* pnValue = &nValue;

	
	
	cout << "Int value: " << nValue << endl;

	cout << "Pointer to int address: " << pnValue << endl;

	cout << "Int value via pointer: " << *pnValue << endl;



	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;

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
