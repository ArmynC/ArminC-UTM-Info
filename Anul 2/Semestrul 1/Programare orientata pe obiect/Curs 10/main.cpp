#include <iostream>
#include<string.h>


using namespace std;

template<class T> class Vectorul
{
    int dim;
    T* pv;

public:
    Vectorul(int n);
    void afisare();
    T& operator[](int i);

};

template<class T> Vectorul<T>::Vectorul(int n)
{

    this->dim = n;
    this->pv = new T[dim];

    for(int i=0; i< dim; i++)
        cin>>pv[i];
}

template<class T> T& Vectorul<T>::operator[](int i)
{
    return pv[i];
}

template<class T> void Vectorul<T>::afisare()
{

    for(int i= 0; i<dim; i++)
        cout<<pv[i]<<" ";
    cout<<endl;
}

class Persoana
{
    char nume[20];
    int varsta;
public:
    Persoana();
    Persoana(char nume[], int varsta);
    void afisare();
    friend istream& operator>>(istream &in, Persoana &ob);
    friend ostream& operator<<(ostream &out, Persoana ob);

};
istream& operator>>(istream &in, Persoana &ob)
{
    in>>ob.nume;
    in>>ob.varsta;

    return in;
}

ostream& operator<<(ostream &out, Persoana ob)
{
    out<<ob.nume<<" "<<ob.varsta<<endl;
}
Persoana::Persoana()
{
    strcpy(nume, "###");
    varsta = 18;
}
Persoana::Persoana(char nume[], int varsta)
{
    strcpy(this->nume, nume);
    this->varsta = varsta;
}
void Persoana:: afisare()
{
  cout<<nume<<" "<<varsta<<endl;
}

int main()
{

    Vectorul<int> vi(3);
    vi.afisare();
    cout<<vi[0]<<endl;

  /*
    Vectorul<double> vd(2);
    vd.afisare();
    cout<<vd[0]<<endl;
    */

    Vectorul<Persoana> vp(2);
    vp.afisare();
    cout<<vp[0];



    return 0;
}
