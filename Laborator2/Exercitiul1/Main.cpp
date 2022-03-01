#include <iostream>
#include "NumberList.h"

int main() {
	
	NumberList lista; 
	lista.Init(); //initializare
	lista.Add(1);
	lista.Add(15);
	lista.Add(11);
	lista.Add(3);
	lista.Print();
	lista.Add(3); 
	lista.Add(133);
	lista.Add(17);
	lista.Add(60);
	lista.Add(103);
	lista.Add(99); // am ajuns la 10 elemente, nu mai putem adauga
	lista.Add(5);
	lista.Add(1);
	lista.Print(); //numarul maxim de elemente e 10
	
	lista.Sort();  
	lista.Print();	//lista sortata
	
	std::cout << "\n" << "A doua lista\n" << std::endl;
	NumberList exemplu;
	exemplu.Init();
	exemplu.Add(11);
	exemplu.Add(13);
	exemplu.Add(2);
	exemplu.Add(7);
	exemplu.Add(3);
	exemplu.Add(5);
	exemplu.Print();

	exemplu.Sort();
	exemplu.Print();
	

}