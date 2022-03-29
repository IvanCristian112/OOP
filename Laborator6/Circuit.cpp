#include "Circuit.h"
#include "Weather.h"
#include "Car.h"
#include <iostream>
#include <string>

Circuit::Circuit()
{	
	this->circuit_length = 50;
	this->weather = 0;
	this->max_index = 15;
	this->number_of_cars = 0;
	// initializarea memoriei
	array_of_cars = (Car**)(malloc(max_index * sizeof(Car))); 
	Times_of_finish = (float*)(malloc(max_index * sizeof(float)));
}

void Circuit::SetLength(int circuit_length) { this->circuit_length = circuit_length;  }
void Circuit::SetWeather(Weather weather) { this->weather = weather; }

bool Circuit::AddCar(Car* c)
{
	if (number_of_cars < max_index) 
	{
		this->array_of_cars[number_of_cars] = c;
		this->number_of_cars++;
		return true;
	}
	return false;

}
void Circuit::Race()
{
	for (int i = 0; i < number_of_cars; i++)
	{
		this->Times_of_finish[i] = array_of_cars[i]->RallyCar(this->weather, this->circuit_length);
		//std::cout << Times_of_finish[i] << "\n";
	}
}

void Circuit::ShowFinalRanks() 
{
	for (int i = 0; i < number_of_cars; i++) {
		for (int j = 0; j < number_of_cars - i - 1; j++) {
			if (Times_of_finish[j] > Times_of_finish[j + 1]) {
				float temp;
				temp = Times_of_finish[j];
				Times_of_finish[j] = Times_of_finish[j + 1];
				Times_of_finish[j + 1] = temp;
				Car* temp_car;
				temp_car = array_of_cars[j];
				array_of_cars[j] = array_of_cars[j+1];
				array_of_cars[j + 1] = temp_car;

			}
		}
	}
	for (int i = 0; i < number_of_cars; i++) {
		if (Times_of_finish[i] != 0) {
			std::cout << Times_of_finish[i] << " hours  ";
			array_of_cars[i]->Print();
			std::cout << "\n";
		}
	}
	std::cout << "\n";
}

void Circuit::ShowWhoDidNotFinish()
{
	std::cout << "Nu au terminat cursa:\n";
	for (int i=0;i<number_of_cars;i++)
		if (Times_of_finish[i] == 0)
		{
			array_of_cars[i]->Print();
			std::cout << "\n";
		}
}