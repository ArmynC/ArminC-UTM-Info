#include <iostream>
using namespace std;

class Date {
	int zi;
	int luna;
	int an;

public:
	Date() {

		// hardcoded
		/*
			zi = 21;
			luna = 10;
			an = 2022;
		*/

		time_t data = time(0);
		tm* ltm = localtime(&data);
		this->zi = ltm->tm_yday;
		this->luna = ltm->tm_mon;
		this->an = 1900 + ltm->tm_year;
	}

	Date(int zi, int luna, int an) {
		this->zi = zi;
		this->luna = luna;
		this->an = an;
	}

	Date(int zi, int luna) {
		this->zi = zi;
		this->luna = luna;

		time_t data = time(0);
		tm* ltm = localtime(&data);
		this->an = ltm->tm_year;
	}

	Date(int zi) {
		time_T data = time(0);
		tm* ltm = localtime(&data);

		this->zi = zi;
		this->luna = ltm->tm_mday;
		this->an = ltm->tm_year;
	}

	void afisare() {
		cout << zi << "/" << luna << "/" << an << endl;
	}
};
int main() {

	Date d1;
	d1.afisare();

	Date d2(17, 1, 2013);
	cout << "Examen: ";
	d2.afisare();

	Date d3(21,10);
	cout << "Laborator 3:  ";
	d3.afisare();

	Date d4(27);
	cout << "Curs 4: ";
	d4.afisare();

	return 0;
}