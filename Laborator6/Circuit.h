#pragma once
#include "Car.h"
#include "Weather.h"
class Circuit
{
private:
	int circuit_length;
	int weather;
	int number_of_cars;
	int max_index;
	Car** array_of_cars;
	float* Times_of_finish;

public:
	Circuit();

	void SetLength(int);
	void SetWeather(Weather);

	bool AddCar(Car* c);

	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

