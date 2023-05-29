#pragma once
#include <iostream>
using namespace std;
class Personaje

{
private:
	int life;
	int attack;
	string name;
	int posicionX;
	int posicionY;

public:
	//getters
	int getLife();
	int getAttack();
	string getName();
	int getPosicionX();
	int getPosicionY();
	//setters
	void setLife(int life);
	void setAttack(int attack);
	void setName(string name);
	void setPosicionX(int posicionX);
	void setPosicionY(int posicionY);
	//Constructor
	Personaje(int life, int attack, string name, int posicionX, int posicionY);



};


