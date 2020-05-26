#include "Heating.h"
#include <iostream>
#include <sstream>
using namespace std;

Heating::Heating(string heat)
	:GeneralDevice(heat)
{
}

string Heating::getClass() const {
	stringstream out;
	out << "Heating mit Teamperatur" << temperature << " Grad";
	return out.str();
}

std::string Heating::toString() const {
	stringstream out;
	out << GeneralDevice::getDeviceName() << "mit Teamperatur " << temperature << " Grad";
	return out.str();
}

Heating& Heating::operator++ () {
	temperature += 0.5;
	return *this;
}
Heating& Heating::operator--() {
	if (temperature > 0) {
		temperature -= 0.5;
	}

	return *this;
}