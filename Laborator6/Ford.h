#pragma once
#include "Car.h"
class Ford : public Car
{
public:
	Ford();
	float RallyCar(int, int) override;
	void Print() override;
};