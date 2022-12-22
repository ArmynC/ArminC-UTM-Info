#include <iostream>

using namespace std;

struct Nod {
    int info;
    Nod* link;
};

Nod* Head = NULL;
int a;

void inserare_inceput(int a) {

    if (Head == NULL) {
        Nod* p = new Nod;
        p->info = a;
        p->link = p;
        Head = p;
    }
    else {
        Nod* p = new Nod;
        if (p == NULL) {
            cout << "OVERFLOW";
            return;
        }
        p->info = a;
        p->link = Head;
        Nod* iter = Head;
        while (iter->link != Head) {
            iter = iter->link;
        }
        iter->link = p;
        Head = p;
    }
}

void inserare_sfarsit(int a) {

    if (Head == NULL) {
        Nod* p = new Nod;
        p->info = a;
        p->link = p;
        Head = p;
    }
    else {
        Nod* p = new Nod;
        if (p == NULL) {
            cout << "OVERFLOW";
            return;
        }
        p->info = a;
        p->link = Head;
        Nod* iter = Head;
        while (iter->link != Head) {
            iter = iter->link;
        }
        iter->link = p;
    }
}

void inserare_dupa_element(int a, Nod* q) {
    if (q == NULL) {
        cout << "elementul dupa nu exista";
        return;
    }

    Nod* p = new Nod;
    if (p == NULL) {
        cout << "OVERFLOW";
        return;
    }
    p->info = a;
    p->link = q->link;
    q->link = p;

}

Nod* accesare(int a) {

    Nod* iter = Head;
    while (iter->link != Head) {
        if (iter->info == a) {
            cout << "element gasit ";
            return iter;
        }
        else {
            iter = iter->link;
        }
    }
    if (iter->info == a) {
        cout << "element gasit ";
        return iter;
    }
    else {
        cout << "element negasit ";
        return NULL;
    }
}


void afisarelista() {
    if (Head == NULL) {
        cout << "NULL " << endl;
        return;
    }
    Nod* iter = Head;
    cout << iter->info << "->";
    iter = iter->link;
    while (iter != Head) {
        cout << iter->info << "->";
        iter = iter->link;
    }
    cout << "Head ";
}

void stergere_element_valoare(Nod* q) {
    if (q == NULL) {
        cout << "valoare invalida " << endl;
        return;
    }
    if (Head == NULL) {
        cout << "UNDERFLOW " << endl;
        return;
    }
    Nod* iter = Head;
    while (iter != NULL && iter->link != q) {
        iter = iter->link;
    }
    iter->link = q->link;

    delete q;
}
void  stergere_element_ordin(int n) {
    int i = 1;
    if (Head == NULL) {
        cout << "UNDERFLOW " << endl;
        return;
    }
    Nod* iter = Head;
    while (iter != NULL && i != n - 1 && iter->link != NULL) {
        iter = iter->link;
        i++;
    }
    if (iter == NULL) {
        cout << "Elementul nu a fost gasit " << endl;
        return;
    }
    if (iter->link == NULL) {
        cout << "Pozitie prea mare!" << endl;
        return;
    }
    Nod* temp = iter->link;
    iter->link = iter->link->link;
    delete temp;
}
int main()
{
    while (1) {

        int input;
        cout << "Selectati operatia: " << endl;
        cout << " 1.  Inserare la inceput" << endl;
        cout << " 2.  Inserare la sfarsit" << endl;
        cout << " 3.  Inserare dupa element" << endl;
        cout << " 4.  Accesare" << endl;
        cout << " 5.  Afisare lista" << endl;
        cout << " 6.  Stergere  element prin valoare" << endl;
        cout << " 7.  Stergere  element prin ordin" << endl;
        cout << " 8.  Incheiere program" << endl;
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
            inserare_dupa_element(a, accesare(e));
            break;
        case 4:
            cout << "Introduceti valoare: ";
            cin >> a;
            accesare(a);
            break;
        case 5:
            afisarelista();
            break;
        case 6:
            cout << "Introduceti valoare elementului pe care vreti sa-l stergeti:  ";
            int g;
            cin >> g;
            stergere_element_valoare(accesare(g));
            break;
        case 7:
            cout << "Introduceti ordinul elementului pe care vreti sa-l stergeti:  ";
            int i;
            cin >> i;
            stergere_element_ordin(i);
            break;
        case 8:
            exit(0);
        default:
            break;
        }

    }

    return 0;
}