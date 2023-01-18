// cautare binara

#include <iostream>

using namespace std;

void cautare1(int n, int v[], int a)
{
    int mij, st = 0, dr = n -1, ok = 0;

    if (v[0] == a) { cout << "Solutie gasita pe pozitia " << 0 << endl; ok = 1; }
    else
    {
        while (st <= dr && ok == 0)
        {
            mij = (st + dr) / 2;

            if (v[mij] == a)
            {
                cout << "Solutie gasita pe pozitia " << mij << endl; ok = 1;
            }
            if (v[mij] > a)
                dr = mij - 1;
            if (v[mij] < a)
                st = mij + 1;
        }
        if (ok == 0) cout << "Nu exista";
    }
}
int main()
{
    int n, v[101], a; 
    
    cout << "Numarul de elemente este : ";

    cin >> n; cout << endl;

    cout << "Elementele sunt :";

    for (int i = 0; i < n; i++) 
        cin >> v[i];

    cout << "Elementul cautat : ";

    cin >> a;

    cautare1(n, v, a);

    return 0;
}
