#include <iostream>
#include "Cat.h"
#include "Animals.h"


using namespace std;




int main()
{
	jwp::Cat cat;
	cat.speak();

	cats::Cat cat2;
	cat2.speak();

	cout << jwp::name << endl;
	cout << cats::CATNAME << endl;
	

	return 0;
}

