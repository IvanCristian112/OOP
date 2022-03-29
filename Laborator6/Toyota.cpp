#include "Toyota.h"
#include "Car.h"
#include "Weather.h"
#include <iostream>

Toyota::Toyota()
{
	fuelCapacity = 61;
	fuelConsumption = 25;
	averageSpeed[Sunny] = 85;
	averageSpeed[Rain] = 70;
	averageSpeed[Snow] = 55;
}

float Toyota::RallyCar(int weather, int circuit_length)
{
	float distance = (fuelCapacity / fuelConsumption)*100.0;
	
	float Time = distance / averageSpeed[weather];
	if (distance < circuit_length) return 0; // daca nu reuseste sa termine cursa 
	else return Time;


}

void Toyota::Print()
{
	std::cout << "Toyota";
}
