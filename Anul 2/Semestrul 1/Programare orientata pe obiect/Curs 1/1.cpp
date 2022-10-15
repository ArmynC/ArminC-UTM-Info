#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "n = ";
	cin >> n;

	int* v = new int[n];
	int nrPoz = 0, nrNeg = 0;

	for (int i = 0; i < n; i++) {
		cin >> v[i];

		if (v[i] > 0)
			nrPoz++;
		else
			if (v[i] < 0)
				nrNeg++;
	}

	int* poz = new int[nrPoz];
	int* neg = new int[nrNeg];

	nrPoz = nrNeg = 0;

	for (int i = 0; i < n; i++) {
		if (v[i] > 0) {
			poz[nrPoz] = v[i];
			nrPoz++;
		}
		else
			if (v[i] < 0)
				neg[nrNeg++] = v[i];
	}

	if (nrPoz > 0) {
		cout << "Elemente pozitive: ";

		for (int i = 0; i < nrPoz; i++)
			cout << poz[i] << " ";
	}
	else {
		cout << "Nu exista numere pozitive";
	}

	cout << endl << "Elemente negative: ";

	for (int i = 0; i < nrNeg; i++)
		cout << neg[i] << " ";

	return 0;

}