#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void initializare(int *v, int n)
{
	srand(time(NULL));
	for (int i = 1; i <= n; i++)
		v[i] = rand() % 21;
}

void afisare(int *v, int n)
{
	for (int i = 1; i <= n; i++)
		cout << v[i] << " ";
	cout << endl;
}#
int Partitie(int *v, int prim, int ultim)
{
	int i = prim, j = ultim;
	int pivot = v[prim];
	while (i <= j)
	{
		while (i <= ultim && v[i] <= pivot)
		{
			i++;
		}

		while (j >= prim && v[j] > pivot)
		{
			j--;
		}

		if (i < j && i <= ultim && j >= prim)
		{
			swap(v[i], v[j]);
			i++;
			j--;
		}
	}

	return i - 1;
}

void sortareRapida(int *v, int prim, int ultim)
{
	int pozPivot;
	if (prim < ultim)
	{
		pozPivot = Partitie(v, prim, ultim);
		swap(v[prim], v[pozPivot]);
		sortareRapida(v, prim, pozPivot - 1);
		sortareRapida(v, pozPivot + 1, ultim);
	}
}

int main()
{
	int n;
	cout << "nr elemente vector=";
	cin >> n;
	int *v = new int[n];
	initializare(v, n);
	afisare(v, n);
	sortareRapida(v, 1, n);
	afisare(v, n);
	return 0;
}