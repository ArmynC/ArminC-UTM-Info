#include <iostream>
using namespace std;

class Angajat {
	char nume
		int varsta;
	double salariu;


public:

	Angajat()
	{
		strcpy(nume, "anonim");
		varsta = 18;
		salariu = 3800.00;
		cout << "Constructor fara grup: " << endl;

	}

	Angajat(char* nume, int varsta, double salariu)
	{
		strcpy(this->nume, nume);
		this->varsta = varsta;
		this->salariu = salariul
			cout << "Constructor cu argumente: " << endl
	}


	void afisare()
	{
		cout << nume << " " << varsta << " " << salariu << endl;
	}


	void setNume() {
		strcpy(nume, val);
	}
	void setvarsta() {
		varsta = val;
	}
	void setSalariu() {
		salariu = val;
	}

	char* setNume() {
		return nume;
	}

	int main() {
		Angajat ob1;
		// Angajat ob2("Maria", 23. 8900.00);

		int an1;
		double salariu;
		char nume[50];

		cout << "Numele este: ";

		cin.getline(nume, 50);

		ob1.setNume(nume);
		ob1.afisare();

		return 0;
	}