#pragma once
#include "Car.h"
class Toyota : public Car
{
public:
	Toyota();
	float RallyCar( int, int) override;
	void Print() override;
};