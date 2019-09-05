

#include <iostream>
using namespace std;

void changeSomething(double &value) {
	value = 123.4;
}

void squareFunction(double& value) {
	value = value * value;
}

int main()
{
	int value1 = 8;
	int &value2 = value1;
	value2 = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	double value = 4.321;
	changeSomething(value);
	cout << value << endl;

	double a = 2;
	while (a < 1000) {
		cout << a << endl;
		squareFunction(a);

	}

	return 0;
}

