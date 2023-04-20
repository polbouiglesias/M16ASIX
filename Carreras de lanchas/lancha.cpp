#pragma once
#include "LANCHA.h"
#include <iostream>

//constructor
LANCHA::LANCHA(int pVelocity, int pDistance, int pNitro, std::string Pname) {
	velocidad = pVelocity;
	distance = pDistance;
	nitro = pNitro;
	name = Pname;
}

//getters
int LANCHA::getVelocity() {
	return velocidad;

}

int LANCHA::getDistance() {
	return distance;
}
int LANCHA::getNitro() {
	return nitro;
}
std::string LANCHA::getName() {
	return name;
}

//setters

void LANCHA::setVelocity(int pvelocity) {
	velocidad = pvelocity;
}
void LANCHA::setDistance(int pdistance) {
	distance = pdistance;
}

void LANCHA::setNitro(int pnitro) {
	nitro = pnitro;

}
void LANCHA::setName(std::string pname) {
	name = pname;
}

//metodos propios

void LANCHA::printStatus() {
	std::cout << "La lancha del primer corredor " << getName() << " va a una velocidad de:  " << getVelocity() << "km/h. Distancia: " << getDistance() << std::endl;
}


int LANCHA::distanceTraveled(int pVelocity) {
	distance = distance + pVelocity * 100;
	return distance;
}
int LANCHA::secondvelocity(int pDado) {
	int velocity = velocidad + pDado;
	return velocity;
}
void LANCHA::nitrocalculator() {
	int nitro; 
	int resultado = 0;
	std::cout << "Quieres usar nitro? [1]si quiero nitro [2] No necesito nitro voy sobrao" << std::endl;
	std::cin >> nitro;
	switch (nitro) {
	case 1:
		resultado = rand() % 2;
		if (resultado == 0) {
			velocidad = velocidad / 2;
			std::cout << "Tu velocidad ha disminuido a la mitad" << std::endl;
		}

		
		if (resultado == 1) {
			velocidad = velocidad * 2;
			std::cout << "Tu velocidad ha sido aumentada" << std::endl;
		}
		nitro--;
		break;
		case 2;
			std::cout << "puedes usar el nitro en la siguente ronda" << std::endl;
			break;
	}
}