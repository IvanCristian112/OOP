#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <iostream>

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int clona_atoi(char* myString) {

	int numar = 0;
	for (int i = 0; myString[i] != '\0'; i++)
		if (myString[i] > 47 && myString[i] < 58) {
			numar = numar * 10 + myString[i] - 48;
		}
	return numar;
}
int partition(int arr[], int low, int high, bool ascendent)
{
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (ascendent == true) {
			if (arr[j] < pivot)
			{
				i++;
				swap(&arr[i], &arr[j]);
			}
		}
		else {
			if (arr[j] > pivot)
			{
				i++;
				swap(&arr[i], &arr[j]);
			}
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void quickSort(int arr[], int low, int high, bool ascendent)
{
	if (low < high)
	{

		int pi = partition(arr, low, high, ascendent);


		quickSort(arr, low, pi - 1, ascendent);
		quickSort(arr, pi + 1, high, ascendent);
	}
}
Sort::Sort(int count, int minim, int maxim) {
	array = (int*)(malloc(count * sizeof(int)));
	srand(time(0));
	for (int i = 0; i < count; i++) {
		array[i] = minim + rand() % (maxim - minim + 1);
	}
	this->nr_elemente = count;
}

Sort::Sort(int * vector, int count) {
	array = (int*)(malloc(count * sizeof(int)));
	for (int i = 0; i < count; i++) {
		array[i] = vector[i];
	}
	this->nr_elemente = count;
}

Sort::Sort(int count, ...) {
	array = (int*)(malloc(count * sizeof(int)));
	this->nr_elemente = count;
	va_list v1;
	va_start(v1, count);
	for (int i = 0; i < count; i++) {
		array[i] = va_arg(v1, int);
	}
	va_end(v1);
}

Sort::Sort() :array(new int[10]{ 10, 7, 2, 17, 1, 3, 4, 8, 9, 11 }) {
	this->nr_elemente = 10;
}


Sort::Sort(const char* C) {
	
	char* copie=(char*)(malloc(strlen(C)*sizeof(char)));
	strcpy(copie, C);
	
	int count = 1;
	int loop = 0;
	while (C[loop] != 0) {
		if (C[loop] == ',') count++;
		loop++;
	}
	array = (int*)(malloc(count * sizeof(int)));
	this->nr_elemente = count;
	loop = 0;
	char* split = strtok(copie, ",");
	while (split != 0) {
		array[loop] = clona_atoi(split);
		split = strtok(NULL, ",");
		loop++;
		
	}
}

void Sort::BubbleSort(bool ascendent) {

	{
		int i, j;
		for (i = 0; i < this->nr_elemente - 1; i++)

			for (j = 0; j < this->nr_elemente - i - 1; j++)
				if (ascendent == true) {
					if (this->array[j] > this->array[j + 1])
						swap(&this->array[j], &this->array[j + 1]);
				}
				else {
					if (this->array[j] < this->array[j + 1])
						swap(&this->array[j], &this->array[j + 1]);
				}
			
	}
}

void Sort::QuickSort(bool ascendent)
{
	int low = 0;
	int high = this->nr_elemente;
	
	quickSort(this->array, low, high-1,ascendent);

}
void Sort::Print() {
	for (int i = 0; i < this->nr_elemente; i++) {
		std::cout << this->array[i] << " ";
	}
	std::cout << "\n";
};


int  Sort::GetElementsCount() {
	return this->nr_elemente;
}

int  Sort::GetElementFromIndex(int index) {
	return this->array[index-1];
}