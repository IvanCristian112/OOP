#include "Dacia.h"
#include "Car.h"
#include "Weather.h"
#include <iostream>

Dacia::Dacia()
{
	fuelCapacity = 50;
	fuelConsumption = 20;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 30;
	averageSpeed[Rain] = 50;

}

float Dacia::RallyCar(int weather, int circuit_length){

	float distance = (fuelCapacity / fuelConsumption)*100.0;
	
	float Time = distance / averageSpeed[weather];
	//std::cout << Time << "\n";
	if (distance < circuit_length) return 0; // daca nu reuseste sa termine cursa 
	else return Time;



}

void Dacia::Print()
{
	std::cout << "Dacia";
}
