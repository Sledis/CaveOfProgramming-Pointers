

#include <iostream>
using namespace std;

class Machine {
private:
	int id;
public:
	Machine() : id(0) { cout << "Machine no-argument constructor called." << endl; }
	Machine(int id) : id(id) { cout << "Machine paramaterized constructor called." << endl; }

	void info() { cout << "ID: " << id << endl; }
};

class Vehicle : public Machine {
public:
	Vehicle(int id):Machine(id) { cout << "Vehicle no-argument constructor called." << endl; }
	Vehicle() { cout << "Vehicle no-argument constructor called." << endl; }

};

class Car : public Vehicle {
public:
	Car() { cout << "Car no-argument constructor called." << endl; }

};

int main()
{
	//Machine machines;
	//Vehicle vehicle;
	//vehicle.info();

	Car car;
	car.info();

	Machine machine(134);
	machine.info();

	Vehicle vehicle(1351);
	vehicle.info();

	return 0;
}
