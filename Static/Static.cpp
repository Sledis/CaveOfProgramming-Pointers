#include <iostream>
using namespace std;

class Test {
private:
	int id;
	static int count;
	

public:
	Test() {
		id = ++count;
	}

	int getID() {
		return id;
	}
	static void showInfo() {
		cout << count << endl;
	}
	static int const MAX = 99;
};

int Test::count = 0;

int main()
{
	Test::showInfo();
	cout << Test::MAX << endl;

	Test Test1;
	cout << Test1.getID() << endl;
	
	Test::showInfo();
	Test Test2;
	cout << Test2.getID() << endl;

	return 0;

}
