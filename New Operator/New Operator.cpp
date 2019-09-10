

#include <iostream>

using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) : name(other.name) {
		cout << "Animal copied." << endl;
	}
	~Animal() {
		cout << "Animal destoryed." << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

Animal* createAnimal() {
	Animal* pAnimal = new Animal();
	pAnimal->setName("Wren");
	return pAnimal;
}


int main()
{
	Animal* pFrog = createAnimal();
	pFrog->speak();

	delete pFrog;

	Animal* pAnimal = new Animal[10];

	pAnimal[5].setName("Fred");
	pAnimal[5].speak();

	delete[] pAnimal;

	char* pMem = new char[1000];
	delete[] pMem;

	Animal* alphaAnimal = new Animal[26];

	char alpha = 'a';
	string name(1, alpha);
	alphaAnimal[0].setName(name);
	alphaAnimal[0].speak();
	for (unsigned i = 1; i < 26; i++) {
		alpha++;
		string name(1, alpha);
		alphaAnimal[i].setName(name);
		alphaAnimal[i].speak();
	}


	delete[] alphaAnimal;

	return 0;
}

