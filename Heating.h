#pragma once
#include "GeneralDevice.h"

class Heating :public GeneralDevice
{
public:
	Heating(std::string);
	virtual std::string getClass() const;
	virtual std::string toString() const override;
	virtual Heating& operator++ () override;
	virtual Heating& operator--() override;

private:
	float temperature = 18.0;
};

