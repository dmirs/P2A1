#include "GeneralDevice.h"
#include <iostream>
#include <sstream>
using namespace std;

GeneralDevice::GeneralDevice(string device )
	:deviceName(device)
{

}
string GeneralDevice::getDeviceName()const {

	return deviceName;

}

string GeneralDevice::getClass() const {
	return " ";
}

string GeneralDevice::toString() const {
	return deviceName;
}

ostream& operator << (std::ostream& out, const GeneralDevice& gd) {
	out << gd.toString();
	return out;

}
