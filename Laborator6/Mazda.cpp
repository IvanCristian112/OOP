#include "Mazda.h"
#include "Car.h"
#include "Weather.h"
#include <iostream>

Mazda::Mazda()
{
	fuelCapacity = 75;
	fuelConsumption = 40;
	averageSpeed[Sunny] = 80;
	averageSpeed[Snow] = 50;
	averageSpeed[Rain] = 65;
}
float Mazda::RallyCar(int weather, int circuit_length)
{
	float distance = (fuelCapacity / fuelConsumption)*100.0;
	float Time = distance / averageSpeed[weather];
	if (distance < circuit_length) return 0; // daca nu reuseste sa termine cursa 
	else return Time;


}

void Mazda::Print()
{
	std::cout << "Mazda";
}
