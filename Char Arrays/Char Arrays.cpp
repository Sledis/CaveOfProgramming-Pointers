// Char Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	

	char text[] = "hello";

	for (int i = 0; i < sizeof(text); i++) {
		cout<<i<<":" << text[i] << endl;
	}

	int k = 0;
	while (true) {
		if (text[k] == 0) {
			break;
		}

		cout << text[k] << flush;
		k++;
	}


	return 0;
}

