#include<iostream>
#include "Vectorul.h"

using namespace std;

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
