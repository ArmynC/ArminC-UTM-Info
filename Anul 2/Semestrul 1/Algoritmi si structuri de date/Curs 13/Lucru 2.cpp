// cautare secventiala

#include <iostream>

using namespace std;

void cautare1(int n, int v[], int a)
{
    int i = 0, ok = 0, poz = -1;

    while (i < n && ok == 0)
    {
        if (v[i] == a) { ok = 1; poz = i; }
        else i++;
    }
    if (ok == 1) cout << "pozitia " << poz;
    else cout << "nu a fost gasit";
}

int main()
{
    int n, v[101];

    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> v[i];

    cautare1(n, v, 2);

    return 0;
}