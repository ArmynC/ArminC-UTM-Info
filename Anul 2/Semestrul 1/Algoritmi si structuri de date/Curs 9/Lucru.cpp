#include <iostream>
#include <cstdlib>
using namespace std;

struct NodArb {
    int info;
    NodArb* stang;
    NodArb* drept;
};

typedef struct NodArb* NodArbPtr;

NodArbPtr creaza_arbore();

void tiparire_arbore(NodArbPtr rad);

void preordine(NodArbPtr rad) {
    if (rad != NULL) {
        cout << rad->info << " ";
        preordine(rad->stang);
        preordine(rad->drept);
    }
}

void inordine(NodArbPtr rad) {
    if (rad != NULL) {
        preordine(rad->stang);
        cout << rad->info << " ";
        preordine(rad->drept);
    }
}

void postordine(NodArbPtr rad) {
    if (rad != NULL) {
        preordine(rad->stang);
        preordine(rad->drept);
        cout << rad->info << " ";
    }
}

int nrNoduriInt(NodArbPtr rad) {
    if (rad != NULL) {
        return 1 + nrNoduriInt(rad->stang) + nrNoduriInt(rad->drept);
    }
    else {
        return 0;
    }
}

int inaltime(NodArbPtr rad) {
    if (rad != NULL) {
        if (inaltime(rad->stang) > inaltime(rad->drept)) {
            return 1 + inaltime(rad->stang);
        }
        else {
            return 1 + inaltime(rad->drept);
        }
    }
    else {
        return 0;
    }
}

int frunze(NodArbPtr rad) {
    if (rad == NULL) {
        return 0;
    }
    if (rad->stang == NULL && rad->drept == NULL) {
        return 1;
    }
    return frunze(rad->stang) + frunze(rad->drept);
}

int main() {

    NodArbPtr rad = NULL;
    cout << "Construim arborele...\n";
    rad = creaza_arbore();
    cout << "\n\nTiparire arbore PREORDINE\n\n";
    tiparire_arbore(rad);

    cout << "Nr noduri: " << nrNoduriInt(rad) << endl;
    cout << "Nr frunze: " << frunze(rad) << endl;
    cout << "Inaltimea arborelui: " << inaltime(rad) << endl;

    cout << "Traversare in preordine:";
    preordine(rad);
    cout << endl;
    cout << "Traversare in inordine:";
    inordine(rad);
    cout << endl;
    cout << "Traversare in postordine:";
    postordine(rad);
    cout << endl << endl;

    return 0;
}

NodArbPtr creaza_arbore() {

    NodArbPtr rad;
    char c;
    cout << "Introduceti un nod (Y/N)? ";
    // rewind(stdin);
    cin >> c;
    if (c == 'y' || c == 'Y')
    {
        rad = new  NodArb;
        cout << "Info radacina: ";
        cin >> rad->info;
        cout << "\nNodul stang al lui " << rad->info << endl;
        rad->stang = creaza_arbore();
        cout << "\nNodul drept al lui " << rad->info << endl;
        rad->drept = creaza_arbore();
    }
    else rad = NULL;
    return rad;
}

void tiparire_arbore(NodArbPtr rad) {

    if (rad == NULL)
        cout << "NULL\n";
    else
    {
        cout << "rad = " << rad->info << endl;
        cout << "Subarbore stang al lui  " << rad->info << endl;
        tiparire_arbore(rad->stang);
        cout << "Subarbore drept al lui " << rad->info << endl;
        tiparire_arbore(rad->drept);
    }
}

