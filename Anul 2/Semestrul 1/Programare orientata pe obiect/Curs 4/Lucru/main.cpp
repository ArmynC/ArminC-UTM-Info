#include <iostream>
#include "Automobil.h"

using namespace std;

void f(Automobil ob)
{
    ob.afisare();
}

int main()
{
    Automobil ob1;//constructorul fara argumente
    Automobil ob2("Seat", 1600, 18.456);//constructor cu argumente
    Automobil ob3 = ob2;//constructor de copiere

    //ob3.afisare();

    f(ob3); //se apeleaza constructorul de copiere

    cout<<ob3.getMarca()<<" "<<Automobil::getTVA()<<endl;
    cout<<"Pret cu TVA: "<<ob3.calculPretTVA()<<endl;

    cout<<"Nr auto: "<<Automobil::getNrAuto()<<endl;


    return 0;
}
