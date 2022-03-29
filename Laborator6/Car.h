#pragma once
class Car 
{
protected :
	float fuelCapacity, fuelConsumption, averageSpeed[3];
public :
	virtual float RallyCar (int weather, int length) = 0;
	virtual void Print() = 0;
};
