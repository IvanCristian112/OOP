#pragma once
#include "Car.h"

class Dacia : public Car
{
public:
	Dacia();
	float RallyCar(int ,int ) override;
	void Print() override;

};