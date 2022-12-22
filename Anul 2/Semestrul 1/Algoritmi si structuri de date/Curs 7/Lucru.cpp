#include <iostream>
#include <fstream>

using namespace std;

struct Nod2
{
    int info;
    Nod2* rlink, * llink;

};

Nod2* FIRST, * LAST = NULL;

Nod2* accesare(int a)
{
    Nod2* iter = FIRST;
    while (iter != NULL && iter->info != a) {
        iter = iter->rlink;
    }
    return iter;
}

void inserareInceput(int a)
{
    Nod2* p = new Nod2;
    if (p == NULL)
    {
        cout << "Overflow" << endl;
        return;
    }
    p->info = a;
    p->llink = NULL;
    p->rlink = FIRST;
    FIRST = p;
    if (LAST == NULL)
    {
        LAST == p;
        return;
    }


};

void inserareSfarsit(int a)
{
    Nod2* p = new Nod2;
    if (p == NULL)
    {
        cout << "Overflow" << endl;
        return;
    }
    p->info = a;
    p->rlink = NULL;
    p->llink = LAST;
    if (LAST != NULL)
    {
        LAST->rlink = p;
    }

    LAST = p;
    if (FIRST == NULL)
    {
        FIRST == p;
    }
}

void inserareMijloc(int a, Nod2* q)
{
    if (q == NULL)
    {
        cout << "Pozitie invalida" << endl;
        return;
    }

    if (q == LAST)
    {
        inserareInceput(a);
    }
    Nod2* p = new Nod2;
    if (p == NULL)
    {
        cout << "Overflow" << endl;
        return;
    }
    p->info = a;
    p->rlink = q->rlink;
    p->llink = q;
    p->rlink->llink = p;
    q->rlink = p;


}

void stergerePrimul()
{
    if (FIRST == NULL && LAST == NULL)
    {
        cout << "UNDERFLOW" << endl;
        return;
    }
    Nod2* temp = FIRST;
    FIRST = temp->rlink;
    temp->rlink->llink = NULL;
    cout << "Elementul sters este" << temp->info << endl;
    delete temp;
    if (FIRST == NULL)
    {
        LAST == NULL;
        return;
    }
}

void stergereUltimul()
{
    if (FIRST == NULL && LAST == NULL)
    {
        cout << "UNDERFLOW" << endl;
        return;
    }
    Nod2* temp = FIRST;
    LAST->llink = temp->llink;
    if (temp->llink != NULL)
    {
        temp->llink->rlink = NULL;
    }

    cout << "Elementul sters este: " << temp->info << endl;
    delete temp;
    if (LAST == NULL)
    {
        FIRST == NULL;
        return;
    }
}

void stergereMijloc(Nod2* q)
{
    if (FIRST == NULL && LAST == NULL)
    {
        cout << "UNDERFLOW" << endl;
        return;
    }
    if (q == NULL)
    {
        cout << "Pozitie invalida" << endl;
        return;
    }
    if (q == FIRST)
    {
        stergerePrimul();
    }
    else if (q == LAST)
    {
        stergereUltimul();
    }
    else
    {
        q->llink->rlink = q->rlink;
        q->rlink->llink = q->llink;
        cout << "Elementul sters este: " << q->info << endl;
        delete q;
    }
}

void afisareInceput()
{
    Nod2* p = new Nod2;
    p = FIRST;
    while (p != NULL && p)
    {
        cout << p->info << "->" << endl;
        p = p->rlink;
    }
    cout << "NULL" << endl;
}

void afisareSfarsit() {
    Nod2* p = new Nod2;
    p = FIRST;
    while (p != NULL && p)
    {
        cout << "<-" << p->info;
        p = p->rlink;
    }
    cout << "<- LAST" << endl;
}

int main()
{
    int a = 8;


    while (1) {
        int input;
        cout << "Selectati operatia: " << endl;
        cout << " 1.  Accesarea unui element" << endl;
        cout << " 2.  Inserarea unui element de la inceput" << endl;
        cout << " 3.  Inserarea unui element de la sfarsit" << endl;
        cout << " 4.  Inserarea dupa un element dat" << endl;
        cout << " 5.  Stergerea primului element" << endl;
        cout << " 6.  Stergerea ultimului element" << endl;
        cout << " 7.  Stergerea unui element dat" << endl;
        cout << " 8. Afisare lista de la inceput" << endl;
        cout << " 9. Afsarea lista de la sfarsit" << endl;
        cout << " 10. Stergerea dupa ordin" << endl;
        cout << " 11. Exit" << endl;
        cin >> input;

        switch (input) {
        case 1:
            cout << "Introduceti valoarea pe care o cautati" << endl;
            cin >> a;
            accesare(a);
            break;
        case 2:
            cout << "Introduceti valoare: ";
            cin >> a;
            inserareInceput(a);
            break;
        case 3:
            cout << "Introduceti valoare: ";
            cin >> a;
            inserareSfarsit(a);
            break;
        case 4:
            cout << "Introduceti valoare: ";
            cin >> a;
            cout << "Introduceti valoarea elementului dupa care doriti sa inserati: ";
            int e;
            cin >> e;
            inserareMijloc(a, accesare(e));
            break;
        case 5:
            stergerePrimul();
            break;
        case 6:
            stergereUltimul();
            break;
        case 7:
            cout << "Introduceti valoarea pe care vreti sa o stergeti: " << endl;
            cin >> a;
            stergereMijloc(accesare(a));
            break;

        case 8:
            afisareInceput();
            break;
        case 9:
            afisareSfarsit();
            break;

        case 11:
            exit(0);

        default:
            break;
        }

    }
    return 0;
}