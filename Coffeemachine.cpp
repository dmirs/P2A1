#include "Coffeemachine.h"
#include <iostream>
#include <sstream>
using namespace std;


Coffeemachine::Coffeemachine(std::string coffee)
	:GeneralDevice(coffee)
{
}

string Coffeemachine::getClass() const {
	stringstream out;
	out << "Coffeemachine mit Tassenzahl " << numberOfCups;
	return out.str();
}
string Coffeemachine::toString() const {
	stringstream out;
	out << GeneralDevice::getDeviceName() << "mit Tassenzahl " << numberOfCups;
	return out.str();
}
Coffeemachine& Coffeemachine::operator++ () {
	numberOfCups += 1;
	return *this;

}
Coffeemachine& Coffeemachine::operator--() {
	if (numberOfCups > 0) {
		numberOfCups -= 1;
	}

	return *this;
}