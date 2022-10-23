#include <iostream>

using namespace std;

struct Nod {
	int info;
	Nod* link;
};

Nod* HEAD = NULL;

void inserare_inceput(int a) {
	Nod* p = new Nod;
	if (p == NULL) {
		cout << "OVERFLOW";
		return;
	}
	p->info = a;
	p->link = HEAD;
	HEAD = p;

}

void inserare_sfarsit(int a) {
	Nod* p = new Nod;
	if (p == NULL) {
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

void inserare_dupa(int a, Nod* q) {
	if (q == NULL) {
		cout << "Elementul dupa nu exista" << endl;
		return;
	}
	Nod* p = new Nod;

	if (p == NULL) {
		cout << "OVERFLOW";
	}
	p->info = a;
	p->link = q->link;
	q->link = p;

}

Nod* accesare(int a) {
	Nod* iter = HEAD;
	while (iter && iter->info != a)
		iter = iter->link;
	return iter;
}

void afisare() {
	Nod* iter = HEAD;
	while (iter && iter->link) { // echivalent - iter != NULL && iter->link
		cout << iter->info << "->";
		iter = iter->link;
	}

	cout << "NULL" << endl;
}

int main()
{
	inserare_inceput(9);
	afisare();
	inserare_inceput(2);
	afisare();
	inserare_inceput(4);
	afisare();
	inserare_inceput(5);
	afisare();
	inserare_dupa(10, HEAD);
	afisare();
	inserare_dupa(12, HEAD->link);
	afisare();

	// testam accesarea

	int a = 2;

	Nod* q = accesare(a);
	if (q == NULL)
		cout << a << " nu este in lista" << endl;
	else
		cout << a << " este in lista la adresa " << q << endl;

	while (1) {
		int input;

		cout << endl;
		cout << "Selectati operatia: " << endl;
		cout << " 1. Inserare la inceput" << endl;
		cout << " 2. Inserare la sfarsit" << endl;
		cout << " 3. Inserare dupa elemente" << endl;
		cout << " 4. Accesare" << endl;
		cout << " 5. Afisare lista" << endl;
		cout << " 6. Incheiere program" << endl;

		cin >> input;

		switch (input) {
		case 1:
			cout << "Introduceti valoarea: ";
			cin >> a;
			inserare_inceput(a);
			break;
		case 2:
			cout << "Introduceti valoarea: ";
			cin >> a;
			inserare_sfarsit(a);
			break;
		case 3:
			cout << "Introduceti valoarea: ";
			cin >> a;
			inserare_dupa(a, accesare(a));
			break;
		case 4:
			cout << "Introduceti valoarea: ";
			cin >> a;
			accesare(a);
			break;
		case 5:
			afisare();
			break;
		case 6:
			exit(0);
			break;
		default:
			break;
		}
	}
}