#include <iostream>
using namespace std;

struct Nod
{
    int info;
    Nod* link;
};

Nod* HEAD = NULL;

void push(int a)
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

void pop()
{
    if (HEAD == NULL)
    {
        cout << "lista este goala..." << endl;
        return;
    }
    Nod* del = HEAD;
    HEAD = HEAD->link;
    cout << "nod sters:" << del->info << endl;
    delete del;
}

int accesare()
{
    return HEAD->info;
}

int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    push(55);
    afisare();
    while (1)
    {
        int inceput;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. accesare" << endl;
        cout << "4. afisare" << endl;
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
            push(x);
            afisare();
            cout << endl;
            break;
        case 2:
            pop();
            afisare();
            cout << endl;
            break;
        case 3:
            cout <<"head=" << accesare() << endl;
            cout << endl;
            break;
        case 4:
            afisare();
            cout << endl;
            break;

        default:
            exit(0);
        }
    }
    return 0;
}
