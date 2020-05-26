#pragma once
#include <string>
class GeneralDevice
{
	friend std::ostream& operator << (std::ostream&, const GeneralDevice&);

public:
	GeneralDevice(std::string);
	std::string getDeviceName()const;
	virtual std::string getClass() const;
	virtual std::string toString() const;
	virtual GeneralDevice& operator++ () = 0;
	virtual GeneralDevice& operator--() = 0;


protected:
	std::string deviceName;

};

