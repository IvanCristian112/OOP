#pragma once
#include "Car.h"
class Mazda : public Car
{
public:
	Mazda();
	float RallyCar(int, int) override;
	void Print() override;

};