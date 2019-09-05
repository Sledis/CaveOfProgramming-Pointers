

#include <iostream>
using namespace std;

int main()
{
	char text[] = "This seems to work fine.";

	int len = sizeof(text) - 1;

	char* pStart = text;
	char* pEnd = text + len - 1;


	while (pStart < pEnd) {
		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;
		pStart++;
		pEnd--;

	}

	cout << text << endl;

	int mid = len / 2;
	for (int i=0; i < mid; i++) {
		char save = text[i];
		text[i] = text[len - 1 - i];
		text[len - 1 - i] = save;
	}
	cout << text << endl;
	return 0;
}

