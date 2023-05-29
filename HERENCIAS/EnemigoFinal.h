#pragma once
#include <iostream>
#include "Personaje.h"
using namespace std;


class EnemigoFinal :public Personaje
{
private:
    int superAtaque1;
    string nombreSuperAtaque1;
    int superAtaque2;
    string nombreSuperAtaque2;


public:
    //getters:
    int getSuperAtaque1();
    string getnombreSuperAtaque1();
    int getSuperAtaque2();
    string getnombreSuperAtaque2();
    //setters
    void setSuperAtaque1(int superAtaque1);
    void setnombreSuperAtaque1(string nombreSuperAtaque1);
    void setSuperAtaque2(int superAtaque2);
    void setnombreSuperAtaque2(string nombreSuperAtaque2);
    //Constructor
    EnemigoFinal(
        int life,
        int attack,
        string name,
        int posicionX,
        int posicionY,
        int pSuperAtaque1,
        string  pNombreSuperAtaque1,
        int pSuperAtaque2,
        string  pNombreSuperAtaque2
    );
};