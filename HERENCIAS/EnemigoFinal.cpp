#pragma once
#include <iostream>
#include "EnemigoFinal.h"
using namespace std;



//Getters

int  EnemigoFinal::getSuperAtaque1() {
	return superAtaque1;
}
string EnemigoFinal::getnombreSuperAtaque1() {
	return nombreSuperAtaque1;
}
int  EnemigoFinal::getSuperAtaque2() {
	return superAtaque2;
}
string EnemigoFinal::getnombreSuperAtaque2() {
	return nombreSuperAtaque2;
}
//Setters
void EnemigoFinal::setSuperAtaque1(int pSuperAtaque1) {
	superAtaque1 = pSuperAtaque1;
}
void EnemigoFinal::setnombreSuperAtaque1(string pnombreSuperAtaque1) {
	nombreSuperAtaque1 = pnombreSuperAtaque1;
}
void EnemigoFinal::setSuperAtaque2(int pSuperAtaque2) {
	superAtaque2 = pSuperAtaque2;
}
void EnemigoFinal::setnombreSuperAtaque2(string pnombreSuperAtaque2) {
	nombreSuperAtaque2 = pnombreSuperAtaque2;
}
//Constructor
EnemigoFinal::EnemigoFinal(
    int life,
    int attack,
    string name,
    int posicionX,
    int posicionY,
    int pSuperAtaque1,
    string  pNombreSuperAtaque1,
    int pSuperAtaque2,
    string  pNombreSuperAtaque2) :Personaje(
        life,
        attack,
        name,
        posicionX,
        posicionY

    ){
    superAtaque1 = pSuperAtaque1;
    nombreSuperAtaque1 = pNombreSuperAtaque1;
    superAtaque2 = pSuperAtaque2;
    nombreSuperAtaque2 = pNombreSuperAtaque2;
}
