#include <iostream>
using namespace std;

void show1(const int elements, string texts[]){
	//cout << sizeof(texts) << endl;
	for (int i = 0; i < elements; i++) {
		cout << texts[i] << endl;
	}
}

void show2(const int elements, string* texts) {
	//cout << sizeof(texts) << endl;
	for (int i = 0; i < elements; i++) {
		cout << texts[i] << endl;
	}
}

void show3(string(&texts)[3]) {
	//cout << sizeof(texts) << endl;
	for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
		cout << texts[i] << endl;
	}
}

string* getArray() {
	string texts[] = { "apple", "orange", "bananna" };

	return texts;
}


char* getMemory() {
	char* pMem = new char[100];

	return pMem;
}

void freeMemory(char* pMem) {
	delete[] pMem;
}

int main()
{
	string texts[] = { "apple", "orange", "bananna" };
	cout << sizeof(texts) << endl;
	show2(3,texts);

	char* pMemory = getMemory();
	freeMemory(pMemory);
	return 0;
}

