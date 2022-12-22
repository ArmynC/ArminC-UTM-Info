#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void initializare(int* v, int n)
{
    srand(time(NULL));
    for (int i = 1; i <= n; i++)
        v[i] = rand() % 21;
}

void afisare(int* v, int n)
{
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;
}

void sortareSelectie(int* v, int n) {
    int minim, j, aux;
    for (int i = 1; i <= n - 1; i++) {
        minim = v[i];
        j = i;
        for (int k = i + 1; k <= n; k++) {
            if (v[k] < minim) {
                minim = v[k];
                j = k;
            }
        }
        if (j != i) {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }
}

void sortareInsertie(int* v, int n)
{
    int i, aux, j;
    for (i = 1; i <= n; i++)
    {
        aux = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > aux) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = aux;
    }
}

int main()
{
    int n;
    cout << "nr elemente vector=";
    cin >> n;
    int* v = new int[n];
    initializare(v, n);
    afisare(v, n);
    //sortareSelectie(v,n);
    //afisare(v,n);
    sortareInsertie(v, n);
    afisare(v, n);
    return 0;
}