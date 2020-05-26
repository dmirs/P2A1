#include "Radio.h"
#include <iostream>
#include <sstream>
using namespace std;

Radio::Radio(string radio)
	:GeneralDevice(radio)
{
}
string Radio::getClass() const {
	stringstream out;
	out << "Radio mit Lautstaerke " << volume << " db";
	return out.str();
}
std::string Radio::toString() const {
	stringstream out;
	out << GeneralDevice::getDeviceName() << "mit Lautstaerke " << volume << " db";
	return out.str();
}
Radio& Radio::operator++ () {
	volume += 2.5;
	return *this;
}
Radio& Radio::operator--() {
	if (volume > 0) {
		volume -= 2.5;
	}
	return *this;
}