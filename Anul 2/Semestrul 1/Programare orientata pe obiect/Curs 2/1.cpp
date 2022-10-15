#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Angajat {
	char nume[30];
	int varsta;
	double salariu;

public:
	void init(char nume[], int varsta, double salariu) {
		strcpy(this->nume, nume);
		this->varsta = varsta;
		this->salariu = salariu;
	}
	void afisare() {
		cout << nume << " " << varsta << " " << salariu << endl;
	}
	double calculSalariuNet() {
		return salariu * 0.55;
	}
};

int main() {
	char nume[30];
	int varsta;
	double salariu;

	ifstream fin("date.in");
	while (fin >> nume >> varsta >> salariu) {
		Angajat ob;
		ob.init(nume, varsta, salariu);
		ob.afisare();
	}
	/*
		cout << "Nume: ";
		cin.get(nume,30);
		cout << "Varsta: ";
		cin >> varsta;
		cout << "Salariu: ";
		cin >> salariu;
	*/

	Angajat p1;
	p1.init(nume, varsta, salariu);
	p1.afisare();

	cout << "Salariul net " << p1.calculSalariuNet();

	return 0;
}
