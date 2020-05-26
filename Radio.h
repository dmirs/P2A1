#pragma once
#include "GeneralDevice.h"

class Radio :public GeneralDevice
{
public:
	Radio(std::string);
	virtual std::string getClass() const;
	virtual std::string toString() const override;
	virtual Radio& operator++ ()override;
	virtual Radio& operator--()override;
private:
	double volume = 40.0;
};

