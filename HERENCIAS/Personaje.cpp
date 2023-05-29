#include "Personaje.h"
#include <iostream>
using namespace std;

//getters

int  Personaje::getLife() {
	return life;
}

int  Personaje::getAttack() {
	return attack;
}
string  Personaje::getName() {
	return name;
}
int  Personaje::getPosicionX() {
	return attack;
}
int  Personaje::getPosicionY() {
	return attack;
}

//setters

void Personaje::setLife(int pLife) {
	life = pLife;
}
void Personaje::setAttack(int pAttack) {
	attack = pAttack;
}
void Personaje::setName(string pName) {
	name = pName;
}
void Personaje::setPosicionX(int pPosicionX) {
	posicionX = pPosicionX;
}
void Personaje::setPosicionY(int pPosicionY) {
	posicionY = pPosicionY;
}
//Constructor

Personaje::Personaje(int pLife, int pAttack, string pName, int pPosicionX, int pPosicionY) {
	life = pLife;
	attack = pAttack;
	name = pName;
	posicionX = pPosicionX;
	posicionY = pPosicionY;
}
      

