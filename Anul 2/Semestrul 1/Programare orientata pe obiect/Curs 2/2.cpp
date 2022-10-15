#include <iostream>
#include <math.h>

using namespace std;

class Punct {
	double x;
	double y;

public:
	void init(double x, double y) {
		// this->x = data membra x. x = argumentul functiei
		this->x = x;
		this->y = y;
	}

	void afisare() {
		cout << "(" << x << ")" << "," << "(" << y << ")" << endl;
	}

	double distanta(Punct p2) {
		return sqrt((this->x - p2.x) * (this->x - p2.x) + (this->y - p2.y) * (this->y - p2.y));
	}
};

int main() {
	// incapsulare - obiect
	Punct p1, p2; // p1 este in stare reziduala
	p1.init(2, 3);
	p2.init(1, 7);

	p1.afisare();
	p2.afisare();

	cout << "Distanta: " << p1.distanta(p2);

	return 0;
}
