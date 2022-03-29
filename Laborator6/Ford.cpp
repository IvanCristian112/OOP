#include "Ford.h"
#include "Car.h"
#include "Weather.h"
#include <iostream>

Ford::Ford()
{
	fuelCapacity = 100;
	fuelConsumption = 40;
	averageSpeed[Sunny] = 75;
	averageSpeed[Rain] = 60;
	averageSpeed[Snow] = 47;
}

float Ford::RallyCar(int weather, int circuit_length)
{
	float distance = (fuelCapacity / fuelConsumption)*100.0;
	float Time = distance / averageSpeed[weather];
	if (distance < circuit_length) return 0; // daca nu reuseste sa termine cursa 
	else return Time;


}

void Ford::Print()
{
	std::cout << "Ford";
}
