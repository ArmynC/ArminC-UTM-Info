/* Fisier: arbori_ptlab.cpp
 * Programul creaza un arbore binar, il tipareste si calculeaza
 * numarul de noduri. Foloseste reprezentarea inlantuita a unui arbore.
 */
#include <iostream>
#include <cstdlib>
using namespace std;

struct NodArb
{
    int info;
    NodArb *stang;
    NodArb *drept;
    };

typedef struct NodArb* NodArbPtr;

NodArbPtr creaza_arbore();

void tiparire_arbore(NodArbPtr rad);


 int main()
{
  NodArbPtr rad=NULL;
  cout<< "Construim arborele...\n";
  rad = creaza_arbore();
  cout<<"\n\nTiparire arbore\n\n";
  tiparire_arbore(rad);
  cout <<endl<<endl;

  return 0;
  }



NodArbPtr creaza_arbore()
{
   NodArbPtr rad;
   char c;
   cout<<"Introduceti un nod (Y/N)? ";
  // rewind(stdin);
   cin>>c;
   if(c=='y'||c=='Y')
   {
   rad = new  NodArb;
   cout<<"Info radacina: ";
   cin >> rad -> info;
   cout<<"\nNodul stang al lui " << rad -> info <<endl;
   rad -> stang = creaza_arbore();
   cout<<"\nNodul drept al lui " << rad -> info <<endl;
   rad -> drept = creaza_arbore();
   }
   else rad=NULL;
   return rad;
}


void tiparire_arbore(NodArbPtr rad)
{
   if(rad==NULL)
   cout<<"NULL\n";
   else
   {
       cout<<"rad = "<< rad ->info<<endl;
       cout<<"Subarbore stang al lui  " << rad -> info <<endl;
       tiparire_arbore(rad -> stang);
       cout<<"Subarbore drept al lui " << rad -> info <<endl;
       tiparire_arbore(rad -> drept);
       }
}

