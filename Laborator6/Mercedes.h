#pragma once
#include "Car.h"
class Mercedes : public Car
{
public:
	Mercedes();
	float RallyCar( int, int) override;
	void Print() override;

};
