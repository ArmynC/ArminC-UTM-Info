#include<iostream>
#include<string.h>
#include "Automobil.h"

using namespace std;

double Automobil::TVA = 0.24;
int Automobil::nrAuto = 0;

Automobil::Automobil()
{
    this->marca = new char[4];
    strcpy(this->marca, "###");
    this->capacitate = 0;
    this->pret = 0.0;
    nrAuto++;
}

Automobil::Automobil(char* marca, int capacitate, double pret)
{
    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, marca);
    this->capacitate = capacitate;
    this->pret = pret;
     nrAuto++;
}

void Automobil::afisare()
{
    cout<<marca<<" "<<capacitate<<" "<<pret<<endl;
}

//deep copy
Automobil::Automobil(const Automobil& sursa)
{
    this->marca = new char[strlen(sursa.marca) + 1];
    strcpy(this->marca, sursa.marca);

    this->capacitate = sursa.capacitate;
    this->pret = sursa.pret;
    cout<<"Constructor de copiere"<<endl;
    nrAuto++;
}

Automobil::~Automobil()
{
    if(this->marca)
        delete []marca;
    cout<<"Destructor"<<endl;
    nrAuto--;
}


void Automobil::setMarca(char* val)
{
     if(this->marca)
        delete[] marca;

     this->marca = new char[strlen(val)  +1];
     strcpy(this->marca, val);
}

void Automobil::setCapacitatea(int val)
{
   this->capacitate = val;
}

void Automobil::setPret(double val)
{
    this->pret = val;
}

void Automobil::setTVA(double val)
{
    TVA = val;
}

char* Automobil::getMarca()
{
    return marca;
}

int Automobil::getCapacitate()
{
    return capacitate;
}

double Automobil::getPret()
{
    return pret;
}

double Automobil::getTVA()
{
    return TVA;
}

double Automobil::calculPretTVA()
{
    return (this->pret + pret*TVA);
}

int Automobil::getNrAuto()
{
    return nrAuto;
}
