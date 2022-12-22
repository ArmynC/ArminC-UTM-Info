#include <iostream>

using namespace std;

int A[10][10];

void citireGraf(int& n) {
    cout << "Nr. persoane: ";
    cin >> n;
    cout << "Matricea de adiacenta: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]=";
            cin >> A[i][j];
        }
    }
    cout << endl;
}

void afisareGraf(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

int main() {
    string info[10];
    string p;
    int n = 10; // nr persoane

    citireGraf(n);
    cout << "Introduceti numele persoanelor " << endl;
    for (int i = 0; i < n; i++)
        cin >> info[i];
    cout << "Lista de persoane :" << endl;
    for (int i = 0; i < n; i++)
        cout << info[i] << " ";
    cout << endl;
    afisareGraf(n);


    while (true) {
        int input;
        cout << "1. Nr. persoane din retea" << endl;
        cout << "2. Inserare persoana in retea cu relatii de prietenie" << endl;
        cout << "3. Eliminare persoana din retea" << endl;
        cout << "4. Afisarea prietenilor unei persoane" << endl;
        cout << "5. Afisarea tuturor prieteniilor" << endl;
        cout << "6. Exit" << endl;

        cout << "Inserati comanda: ";
        cin >> input;
        switch (input) {
        case 1: //nr. persoane din retea
            cout << "Nr. de persoane: " << n;
            break;

        case 2: //inserare persoana in retea cu relatii de prietenie
        {
            cout << "Numele persoanei: ";
            cin >> p;
            cout << "Introduceti lista de prieteni: " << endl;
            for (int i = 0; i < n; i++) {
                cout << info[i] << " ? ";
                cin >> A[n][i];
                A[i][n] = A[n][i];
                info[n] = p;
            }
            n++;

        }
        break;

        case 3: //eliminare persoana din retea
        {
            cout << "Numele persoanei pe care doriti sa o stergeti: ";
            cin >> p;
            int iter = 0;
            for (int i = 0; i < n; i++) {
                if ((info[i] == p) == 1) {
                    iter = i;

                    for (int k = iter; k <= n - 1; k++) {
                        for (int j = 0; j < n; j++) {
                            A[j][k] = A[j][k + 1];
                            info[j] = info[j + 1];
                        }
                    }

                    for (int k = iter; k <= n - 1; k++)
                        for (int j = 0; j < n; j++)
                            A[k][j] = A[k + 1][j];

                    n--;
                    cout << "Persoana " << p << " a fost stearsa" << endl;
                }
            }
            if (iter == 0)
                cout << "Persoana nu a fost gasita." << endl;

            afisareGraf(n);
        }
        break;

        case 4: //afisarea prietenilor unei persoane din retea
        {
            cout << "Numele persoanei: ";
            cin >> p;
            int indice;
            for (int i = 0; i < n; i++)
                if ((info[i] == p) == 0)
                    indice = i;
            cout << "Lista de prieteni pentru " << p << " este: " << endl;
            for (int i = 0; i < n; i++)
                if (A[indice][i] == 1)
                    cout << info[i] << " ";
            cout << endl;
        }
        break;

        case 5: //afisarea tuturor relatiilor de prietenie
            for (int i = 0; i < n; i++) {
                cout << "Persoana " << info[i] << " are prietenii: ";
                for (int j = 0; j < n; j++)
                    if (A[i][j] == 1) cout << info[j] << " ";
                cout << endl;
            }
            break;

        case 6:
            exit(0);

        default:
            break;
        }
    }
    return 0;
}
