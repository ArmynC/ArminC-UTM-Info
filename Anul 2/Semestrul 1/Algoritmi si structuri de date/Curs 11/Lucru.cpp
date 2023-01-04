#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void initializare(int *v,int n)
{
    srand(time(NULL));
    for(int i=1; i<=n; i++)
        v[i]=rand()%21;
}

void initializare2(int *v,int n)
{
    srand(time(NULL));
    for(int i=1; i<=n; i++)
        v[i]=rand()%20;
}

void afisare(int *v,int n)
{
    for(int i=1; i<=n; i++)
        cout << v[i] << " ";
    cout << endl;
}

void interclasare(int *v, int *u, int *vu, int n, int m){

    int iterV = 1, iterU = 1, iterVU = 1;
    while(iterV <= n && iterU <= m){
        if(v[iterV] < u[iterU]){
            vu[iterVU] = v[iterV];
            iterV++;
        }else{
            vu[iterVU] = u[iterU];
            iterU++;
        }
        iterVU++;
    }
    while(iterV <= n){
        vu[iterVU]=v[iterV];
        iterV++;
        iterVU++;
    }
    while(iterU <= m){
        vu[iterVU]=v[iterU];
        iterU++;
        iterVU++;
    }
}

void sortareBubble (int *v, int n)
{

    int ultim = n, aux;
    bool schimba;
    do{
        schimba = false;
        for(int i=1; i<ultim; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                schimba = true;
            }
        }
        ultim--;
    }while(schimba == true);

}

int main()
{
    int n, m;
    cout << "Nr elemente vector 1=";
    cin >> n;
    cout << "Nr elemente vector 2=";
    cin >> m;
    int *v=new int[n];
    int *u=new int[m];
    int *vu=new int[n + m];
    initializare(v,n);
    initializare2(u,m);
    sortareBubble(v, n);
    sortareBubble(u, m);
    afisare(v,n);
    afisare(u,m);
    interclasare(v, u, vu, n, m);
    afisare(vu, n + m);
    return 0;
}
