#include <iostream>
#include "EnemigoFinal.h"
#include "Personaje.h"
using namespace std;

//Variables
int mapa[9][4];
int posicion;
int x;
int y;




//Funciones
void randomEnemigos() {
	x = 1 + rand() % 8;
	y = rand() % 5;

}
void batallaEnemigo(Personaje nombre,Personaje enemigo) {
	if (nombre.getPosicionX() == enemigo.getPosicionX() && nombre.getPosicionY() == enemigo.getPosicionY())
	{
		//batalla

	}
}
void batallaFinal(Personaje nombre, EnemigoFinal enemigoF) {
	if (nombre.getPosicionX() == enemigoF.getPosicionX() && nombre.getPosicionY() == enemigoF.getPosicionY())
	{
		//batalla
	}
}

void mapaprint() {
	for (size_t i = 0; i <= 9; i++)
	{
		
		for (size_t f = 0; f <=4; f++)
		{
			cout << " - " << "    ";
		}
		cout << endl;
	}
}


int main()
{
	srand(time(NULL));
	mapaprint();


	//
	cout << "Escoge la posicion de 0 a 4" << endl;
	cin >> posicion;


	//CONSTRUCTOR
	Personaje heroe(5000,2500,"Victor",0,posicion);
	randomEnemigos();
	Personaje enemigo1(4000,2300,"Christian",x,y);
	randomEnemigos();
	Personaje enemigo2(3000, 3300, "Pol",x, y);
	randomEnemigos();
	Personaje enemigo3(5000, 4300, " KingChristian",x, y);
	randomEnemigos();
	Personaje enemigo4(6000, 1300, " King Pol",x, y);
	randomEnemigos();
	EnemigoFinal enemgigoFinal(10000,11000,"King Ramon",9,y,15000,"SuperPunetazo",20000,"SuperPatada");



	while (enemgigoFinal.getLife() >0 || heroe.getLife() >0)
	{
		batallaEnemigo(heroe, enemigo1);
		batallaEnemigo(heroe, enemigo2);
		batallaEnemigo(heroe, enemigo3);
		batallaEnemigo(heroe, enemigo4);
		batallaFinal(heroe, enemgigoFinal);

		// toca hacer moviemiento del heroe 

	}

}
//nos queda el movimiento del heroe
//las batallas (montar las batallas de losenemigos y enemigo final)
// poner si ganas o pierdes  