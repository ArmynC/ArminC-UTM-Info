#include <iostream>
#include <fstream>
using namespace std;

ifstream f("grafuri.in");

int n,i,j,a[200][200],x,nr[200],nr1[200],s,s1,nrr,ok,p,m;
int main()
{
    f>>n;
    f>>x;
    cout<<"Graful are: "<<n <<" varfuri";
    cout<<endl;
    if(x==0) cout<<"Graful este neorientat"<<endl;
    else cout <<"Graful este orientat"<<endl;
    cout<<endl;

    cout<< "Matricea de adiacenta este :" <<endl;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    if (x==1)//orientat
    {
        while (f>>i>>j)
            if(i<=n && j<=n) a[i][j]=1;
    }
    else
    {
        while (f>>i>>j)
        {
            if(i<=n && j<=n)
            {
                a[i][j]=1;
                a[j][i]=1;
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"Lista de adiacenta este : "<<endl;
    for(i=1; i<=n; i++)
    {
        ok=0;
        cout<<"Nodul : "<<i <<" : ";
        for(j=1; j<=n; j++)
            if(a[i][j]!=0)
            {
                ok=1;
                cout<< j<< " ";
            }
        if(ok==0) cout <<"Nu este adiacent nici unui varf";
        cout<<endl;
    }
    cout<<endl;

    s=0;
    s1=0;
    for(i=1; i<=n; i++) nr[i]=-1;
    cout<<"Gradele exterioare g(+) sunt :" <<endl;
    for(i=1; i<=n; i++)
    {
        nrr=0;
        for(j=1; j<=n; j++)
            if(a[i][j]!=0) nrr++;
        nr[i]=nrr;
        cout<<"Varful " << i<<" are gradul exterior "<< nrr<<endl;
        s=s+nrr;
    }

    cout<<endl;
    cout<<endl;
    cout<<"Gradele interioare g(-) sunt :" <<endl;
    for(i=1; i<=n; i++) nr1[i]=0;
    for(j=1; j<=n; j++)
    {
        nrr=0;
        for(i=1; i<=n; i++)
            if(a[i][j]!=0) nrr++;
        nr1[j]=nrr;
        cout<<"Varful " << j<<" are gradul interior "<< nrr<<endl;
        s1=s1+nrr;
    }

    cout<<endl;
    cout<<"Suma gradelor exterioare este : "<<s;
    cout<<endl;
    cout<<"Suma gradelor interioare este : "<<s1;
    cout<<endl;
    cout<<endl;

    cout<<"Vectorul ce contine gradele exterioare: ";
    for(i=1; i<=n; i++) cout<<nr[i]<<" ";
    cout<<endl;
    cout<<"Vectorul ce contine gradele exterioare: ";
    for(i=1; i<=n; i++) cout<<nr1[i]<<" ";
    cout<<endl<<endl;
    for(i=1; i<=n; i++)
        if(nr[i]==0 && nr1[i]==0) cout<<" Varful: "<< i<< " este un varf izolat "<<endl;
    cout<<endl;
    cout<<endl;

    if(x==0)
    {
        p=1;
        cout<<"Se pot forma: ";
        for(i=1; i<=n*(n-1)/2; i++)
            p=p*2;
        cout<< p <<" grafuri neorientate distincte 2^(n-1)*n/2 "<<endl;

        //muchii
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(a[i][j]!=0) m++;
        m=m/2;
        cout << "Graful are " <<m << " muchii"<<endl;
        if(m==n-1) cout<<"Graful este un arbore"<<endl;
        if(m==(n-1)*n/2)
        {
            cout<< "Graful este complet "<<endl;
            cout<< "Graful contine: ";
            p=1;
            for(i=1; i<=n-1; i++)
                p=p*i;
            p=p/2;
            cout<< p<<" cicluri hamiltoniene" <<" (n-1)!/2" <<endl;
        }

        p=1;
        for(i=1; i<=m; i++)
            p=p*2;
        cout<<"Se pot forma: " << p<< " grafuri partiale (2^m) "<<endl;

        p=1;
        for(i=1; i<=n; i++)
            p=p*2;
        p=p-1;
        cout<<"Se pot forma: " << p<< " subgrafuri (2^n -1) "<<endl;

        //eulerian
        p=0;
        for(i=1; i<=n; i++)
            if(nr[i]!=0 && nr[i]%2==0) p++;
        if(p==n) cout<< "Graful este eulerian "<<endl;
    }
    else
    {
        //orientat
        p=1;
        cout<<"Se pot forma: ";
        for(i=1; i<=n*(n-1)/2; i++)
            p=p*2;
        cout<< p <<" grafuri turneu 2^(n-1)*n/2 "<<endl;
        p=0;
        for(i=1; i<=n; i++)
            if(nr[i]==nr1[i]) p++;
        if(p==n) cout<<"Graful este eulerian"<<endl;
    }
    cout<<endl<<endl;

    //drumuri
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i][j]!=0)
            {
                for(int k=1; k<=n; k++)
                {
                    if(a[i][j]>a[j][k]) a[i][j]=a[i][j];
                    else  a[i][j]=a[j][k];
                }
            }
        }
    }
    cout<<"matricea drumurilor este: "<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    int nrh=0;
    for(i=1; i<=n; i++)
        if(a[i][i+1]==1) nrh++;
    if(nrh==n-1) cout<<"Graful este hamiltonian"<<endl;
    return 0;
}

/*
8
0
1 2
2 4
43
4 6
6 1
6 7
7 5
5 4
*/

/*
4
0
1 2
1 3
1 4
2 1
2 3
2 4
3 1
3 2
3 4
4 1
4  2
4 3
*/

/*
4
1
1 2
2 3
3 4
4 1
*/
