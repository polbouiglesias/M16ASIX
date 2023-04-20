#pragma once
#include <iostream>

class LANCHA
{
private:
    int velocidad;
    int distance;
    int nitro;
    std::string name;
    int pDado;
public:
    

    //getters
    int  getVelocity();
    int  getDistance();
    int  getNitro();
    std::string getName();
    //setters
    void setVelocity(int pDistance);
    void setDistance(int pVelocity);
    void setNitro(int pNitro);
    void setName(std::string pName);

    //metodos propios
    void printStatus();
    int distanceTraveled(int pVelocity);
    
    int secondvelocity(int pDado);

    void nitrocalculator();


    //constructor
    LANCHA(int pVelocity, int pDistance, int pNitro, std::string Pname);

};

