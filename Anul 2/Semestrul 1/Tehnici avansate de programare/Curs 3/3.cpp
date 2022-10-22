/*

Determinarea perechilor cu suma data

-> tablou unidimensional v cu n numere naturale sortate strict crescator
-> un numar natural s
-> sa se determine toate perechile (v[i], v[j]) cu proprietatea ca ( v[i] + v[j] ) = ( v[i] != v[j] )

s = 23;
v = (2, 5, 10, 14, 18, 23, 30)

*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void varianta_1(int* v, int n, s) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] > v[j] == s) {
				cout << v[i] << " + " << v[j] << endl;
			}
		}
	}
}
int main()
{
	int n = 1000000, * v;
	double t;

	v = new int[n];

	srand(time(NULL));

	v[0] = 1 + rand() % 100;

	for (int i = 1; i < n; i++) {
		v[i] = v[i - 1] + rand() % 20 + 1;
	}

	s = v[100] + v[10000];

	/////

	/*
	cout << "Tabolul initial: " << endl;
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	*/

	cout << endl;

	t = clock();

	sort(v, v + n);

	t = clock() - t;

	cout << endl;

	/*
	cout << "Tabloul sortat:" << endl;
	for(int i = 0; i < n; i++)
	cout << v[i] << " ";
	cout << endl;
	*/

	cout << endl;

	cout << "Timp de executare: " << t / CLOCKS_PER_SEC << "s" << endl;

	delete[]v;

	return 0;
}