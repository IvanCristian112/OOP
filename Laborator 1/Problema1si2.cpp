#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int clona_atoi(char* myString) {

	int numar = 0;
	for (int i = 0; myString[i] != '\0'; i++)
		if (myString[i] > 47 && myString[i] < 58) {
			numar = numar * 10 + myString[i] - 48;
		}
		else break;
	return numar;
}
int lungime_linie(char matrice_cuvinte[20][20], int n) {
	int lungime = 0;
	for (int i = 0; i < 20; i++) {
		if (matrice_cuvinte[n][i] >= 65 && matrice_cuvinte[n][i] <= 122)
			lungime += 1;

	}
	return lungime;
}
void swap_lines(char matrice_cuvinte[20][20], int n, int m) {
	char temp[20];
	for (int i = 0; i < 20; i++) {
		temp[i] = matrice_cuvinte[n][i];
		matrice_cuvinte[n][i] = matrice_cuvinte[m][i];
		matrice_cuvinte[m][i] = temp[i];
	}
}
int main()
{
	FILE* fp;
	int suma = 0;
	fopen_s(&fp, "in.txt", "r");
	if (fopen_s(&fp, "in.txt", "r") != 0)
	{
		printf("Eroare. Nu am putut deschide fisierul\n");
	}
	else {
		printf("Am deschis fisierul cu success!\n");
		char myString[200];

		while (fgets(myString, 200, fp))
		{
			//myString[strlen(myString) - 1] = '\0';
			suma = suma + clona_atoi(myString);
		}
	}
	printf("%d", suma)  ;
	printf ("\n");


	// problema 2 

	printf("Introduceti numarul de cuvinte din propozitie: ");
	int numarCuvinte;
	scanf_s("%d", &numarCuvinte, 2);
	printf("Introduceti o propozitie: ");
	char cuvant[20];
	char matrice_cuvinte[20][20];
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
			matrice_cuvinte[i][j] = '\0';

	int counter = 0;
	while (scanf_s("%19s", cuvant, 19))
	{

		

		for (int i = 0; i < 20; i++) {
			matrice_cuvinte[counter][i] = cuvant[i];
		}
		for (int i = counter ; i >= 0; i--) {
			for (int j = counter; j > counter-i ; j--) {
				
				if (lungime_linie(matrice_cuvinte, j) > lungime_linie(matrice_cuvinte, j-1))
					swap_lines(matrice_cuvinte, j, j-1 );
				if (lungime_linie(matrice_cuvinte,j) == lungime_linie(matrice_cuvinte,j-1))
					if (strcmp(matrice_cuvinte[j], matrice_cuvinte[j-1])<0) swap_lines(matrice_cuvinte, j, j - 1);
			}
		}
		
		counter += 1;
		if (counter >= numarCuvinte)
			break;
	}
	
	for (int i = 0; i < counter; i++) {
		for (int j = 0; j < lungime_linie(matrice_cuvinte,i); j++) {
				std::cout << matrice_cuvinte[i][j] ;
			
		}
		std::cout<<"\t" << lungime_linie(matrice_cuvinte, i) << "\n";
	}

	
}

