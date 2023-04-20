// Carreras de lanchas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "LANCHA.h"

int main()
{
	int turn = 0;
	srand(time(NULL));                      //necesario cuando hacemos algo aleatorio.
	LANCHA LANCHA1(0, 0, 1, "Victor");
	LANCHA LANCHA2(0, 0, 1, "Christian");

	do {
		int dados = (rand() % 6) + 1;
		//LANCHA1.secondvelocity(dados);
		LANCHA1.setVelocity(LANCHA1.secondvelocity(dados));
		dados = (rand() % 6) + 1;
		//LANCHA2.secondvelocity(dados);
		LANCHA2.setVelocity(LANCHA2.secondvelocity(dados));
		if (LANCHA1.getNitro() > 0) {
			LANCHA1.nitrocalculator();	
		}
		if (LANCHA2.getNitro() > 0) {
			LANCHA2.nitrocalculator();
		}
		LANCHA1.setDistance(LANCHA1.distanceTraveled(LANCHA1.getVelocity()));
		LANCHA2.setDistance(LANCHA2.distanceTraveled(LANCHA2.getVelocity()));
		LANCHA1.printStatus();
		LANCHA2.printStatus();
		turn++;
	} while (turn < 5);

	if (LANCHA1.getDistance() < LANCHA2.getDistance()) {
		std::cout << "Ha ganado la LANCHA2" << std::endl;
	}
	else if (LANCHA2.getDistance() < LANCHA1.getDistance()) {
		std::cout << "Ha ganado la LANCHA1" << std::endl;
	}
	else {
		std::cout << "Ha habido un empate" << std::endl;
	}
}

