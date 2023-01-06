#include<iostream>
#include<string.h>
#include "Autovehicul.h"

using namespace std;

Autovehicul::Autovehicul()
{
    this-> marca = new char[4];
    strcpy(this->marca,"###");
    this->capacitate = 0;
    this -> putere = 0.0;
    this -> masa = 0.0;
}

Autovehicul::Autovehicul (char* marca, int capacitate, double putere, double masa)
{
    this -> marca = new char[strlen(marca) + 1];
    strcpy(this ->marca, marca);
    this -> capacitate = capacitate;
    this -> putere = putere;
    this -> masa = masa;
}

Autovehicul :: ~Autovehicul()
{
    if(marca)
    {
        delete[]marca;
    }
}

Autovehicul::Autovehicul(const Autovehicul& ob)
{
    this ->marca = new char[strlen(ob.marca)+1];
    this -> capacitate = ob.capacitate;
    this -> putere = ob.putere;
    this -> masa = ob.putere;
}

void Autovehicul::setMarca(char* val)
{
    if(marca)
        delete[]marca;
    this -> marca = new char[strlen(val) + 1];
    strcpy(this->marca, val);

}

void Autovehicul::setCapacitate(int val)
{
    this -> capacitate = val;
}

void Autovehicul::setPutere(double val)
{
    this->putere = val;

}

void Autovehicul::setMasa(double val)
{
    this -> masa = val;


}

char* Autovehicul::getMarca()
{
    return marca;
}

int Autovehicul::getCapacitate()
{
    return capacitate;
}

double Autovehicul::getPutere()
{
    return putere;
}

double Autovehicul::getMasa()
{
    return masa;
}

void Autovehicul::afisare()
{
    cout<<"Marca: "<< marca <<endl;
    cout<<"Capacitate: "<<capacitate<<endl;
    cout<<"Putere: "<< putere<<endl;
    cout<<"Masa: "<< putere<<endl;
    cout<<"....................."<<endl;
}