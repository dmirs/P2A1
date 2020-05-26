#pragma once
#include "GeneralDevice.h"

class Coffeemachine : public GeneralDevice
{
public:
	Coffeemachine(std::string);
	virtual std::string getClass() const;
	virtual std::string toString() const;
	virtual Coffeemachine& operator++ ()override;
	virtual Coffeemachine& operator--() override;

private:
	int numberOfCups = 0;
};

