#include <iostream>

using namespace std;

struct Nod
{
    int info;
    Nod* link;
};

Nod* HEAD = NULL;

void inserare_inceput(int a)
{
    Nod* p = new Nod;
    if (p == NULL)
    {
        cout << "OVERFLOW";
        return;
    }
    p->info = a;
    p->link = HEAD;
    HEAD = p;
}

void inserare_sfarsit(int a)
{
    Nod* p = new Nod;
    if (p == NULL)
    {
        cout << "OVERFLOW";
        return;
    }
    p->info = a;
    p->link = NULL;
    Nod* iter = HEAD;
    while (iter && iter->link)
        iter = iter->link;
    if (iter)
        iter->link = p;
    else HEAD = p;

}

void inserare_dupa(int a, Nod* q)
{
    if (q == NULL)
    {
        cout << "elementul dupa nu exista" << endl;
        return;
    }
    Nod* p = new Nod;
    if (p == NULL)
    {
        cout << "OVERFLOW";
        return;
    }
    p->info = a;
    p->link = q->link;
    q->link = p;
}

Nod* accesare(int a)
{
    Nod* iter = HEAD;
    while (iter && iter->info != a)
        iter = iter->link;
    return iter;
}


void afisare()
{
    Nod* iter = HEAD;
    while (iter)// iter!=NULL && iter->link != NULL)
    {
        cout << iter->info << "->";
        iter = iter->link;
    }
    cout << "NULL" << endl;

}

void stergere_inceput()
{
    if (HEAD == NULL)
    {
        cout << "lista este goala..." << endl;
        return;
    }
    Nod* del = HEAD;
    HEAD = HEAD->link;
    delete del;
}

void stergere_sfarsit()
{
    if (HEAD == NULL)
    {
        cout << "lista este goala..." << endl;
        return;
    }
    Nod* iter = HEAD;
    while (iter && iter->link->link != NULL)
        iter = iter->link;
    delete iter->link;
    iter->link = NULL;
}

void stergere_element(Nod* q)
{
    if (q == HEAD)
    {
        stergere_inceput();
        return;
    }
    if (q->link == NULL)
    {
        stergere_sfarsit();
        return;
    }
    if (HEAD == NULL)
    {
        cout << "lista este goala..." << endl;
        return;
    }
    Nod* iter = HEAD;
    while (iter && iter->link != q)
        iter = iter->link;
    iter->link = q->link;
    delete q;
}

void stergere_pozitie(int p)
{
    if (HEAD == NULL)
    {
        cout << "lista este goala..." << endl;
        return;
    }
    if (p == 1)
    {
        stergere_inceput();
        return;
    }
    Nod* iter = HEAD;
    while (p > 2 && iter && iter->link != NULL)
    {
        iter = iter->link;
        p--;
    }
    if (iter && iter->link)
    {
        Nod* temp = iter->link;
        iter->link = iter->link->link;
        delete temp;
    }
}

int main()
{
    afisare();
    inserare_inceput(9);
    afisare();
    inserare_inceput(2);
    afisare();
    inserare_inceput(4);
    afisare();
    inserare_sfarsit(5);
    afisare();
    inserare_dupa(10, HEAD);
    afisare();
    inserare_dupa(12, HEAD->link);
    afisare();
    stergere_sfarsit();
    afisare();
    // testam accesare
    int a = 8;
    Nod* q = accesare(a);
    if (q == NULL)
        cout << a << " nu este in lista" << endl;
    else
        cout << a << " este in lista la adresa " << q << endl;
    //
//    while(1)
//    {
//        int input;
//        cin >> input;
//        switch(input)
//        {
//        case 1:
//        case 2:
//
//        }
//    }

    while (1) {
        int input;
        cout << "Selectati operatia: " << endl;
        cout << "1. Inserare la inceput" << endl;
        cout << "2. Inserare la sfarsit" << endl;
        cout << "3. Inserare dupa element" << endl;
        cout << "4. Accesare" << endl;
        cout << "5. Afisare lista" << endl;
        cout << "6. Incheiere program" << endl;
        cout << "7. Stergere la inceput" << endl;
        cout << "8. Stergere la sfarsit" << endl;
        cout << "9. Sergere element specificat" << endl;
        cout << "10. Stergere pozitie" << endl;
        cin >> input;

        switch (input) {
        case 1:
            cout << "Introduceti valoare: ";
            cin >> a;
            inserare_inceput(a);
            break;
        case 2:
            cout << "Introduceti valoare: ";
            cin >> a;
            inserare_sfarsit(a);
            break;
        case 3:
            cout << "Introduceti valoare: ";
            cin >> a;
            cout << "Introduceti valoare elementului dupa care doriti sa inserati: ";
            int e;
            cin >> e;
            inserare_dupa(a, accesare(e));
            break;
        case 4:
            cout << "Introduceti valoare: ";
            cin >> a;
            accesare(a);
            break;
        case 5:
            afisare();
            break;
        case 6:
            exit(0);
        case 7:
            stergere_inceput();
            break;
        case 8:
            stergere_sfarsit();
            break;
        case 9:
            cout << "valoarea de sters:" << endl;
            int val;
            cin >> val;
            stergere_element(accesare(val));
            afisare();
            break;
        case 10:
            cout << "pozitia de sters:" << endl;
            int poz;
            cin >> poz;
            stergere_pozitie(poz);
            afisare();
            break;

        default:
            break;
        }

    }

    return 0;
}