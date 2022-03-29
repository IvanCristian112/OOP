#include "Mercedes.h"
#include "Car.h"
#include "Weather.h"
#include <iostream>

Mercedes::Mercedes()
{
	fuelCapacity = 60;
	fuelConsumption = 80;
	averageSpeed[Sunny] = 110;
	averageSpeed[Rain] = 90;
	averageSpeed[Snow] = 75;
}

float Mercedes::RallyCar(int weather, int circuit_length)
{
	float distance = (fuelCapacity / fuelConsumption)*100.0;
	float Time = distance / averageSpeed[weather];
	if (distance < circuit_length) return 0; // daca nu reuseste sa termine cursa 
	else return Time;


}

void Mercedes::Print()
{
	std::cout << "Mercedes";
}
