#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int** mat = new int* [n];
    for (int i = 0; i < n; i++)
    {
        mat[i] = new int[i + 1];
        for (int j = 0; j < i + 1; j++)
            mat[i][j] = j + 1;

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}
