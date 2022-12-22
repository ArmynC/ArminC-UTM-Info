#include <iostream>
using namespace std;

struct Nod
{
    int info;
    Nod* link;
};

Nod* HEAD = NULL;

void enque(int a)
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

void afisare()
{
    cout << "Afisare:" << endl;
    Nod* iter = HEAD;
    while (iter)// iter!=NULL && iter->link != NULL)
    {
        cout << iter->info << "->";
        iter = iter->link;
    }
    cout << "NULL" << endl;
}

void deque()
{
    if (HEAD == NULL)
    {
        cout << "lista este goala..." << endl;
        return;
    }
    Nod* iter = HEAD;
    while (iter && iter->link->link != NULL)
        iter = iter->link;
    cout << "nod sters:" << iter->link->info << endl;
    delete iter->link;
    iter->link = NULL;
}

int main()
{
    enque(11);
    enque(22);
    enque(33);
    enque(44);
    enque(55);
    afisare();
    while (1)
    {
        int inceput;
        cout << "1. enque" << endl;
        cout << "2. deque" << endl;
        cout << "3. afisare" << endl;
        cout << "orice alt numar = EXIT" << endl;
        cout << "---------------------------------" << endl;
        cout << "Selectati operatia: " << endl;
        cin >> inceput;

        switch (inceput)
        {
        case 1:
            cout << "dati elementul:";
            int x;
            cin >> x;
            enque(x);
            afisare();
            cout << endl;
            break;
        case 2:
            deque();
            afisare();
            cout << endl;
            break;
        case 3:
            afisare();
            cout << endl;
            break;

        default:
            exit(0);
        }
    }
    return 0;
}

