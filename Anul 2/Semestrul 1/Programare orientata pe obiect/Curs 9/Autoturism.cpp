#include <iostream>
#include "Autoturism.h"
#include "Autovehicul.h"

using namespace std;

Autoturism::Autoturism():Autovehicul()
{

}

Autoturism::Autoturism(char* marca, int capacitate, double putere, double masa):Autovehicul(marca, capacitate, putere, masa)
{

}

double Autoturism::calculImpozit()
{
    return (this -> capacitate/200)*8;
}

double Autoturism::calculRovinieta()
{
    return (this->capacitate)*0.02;
}