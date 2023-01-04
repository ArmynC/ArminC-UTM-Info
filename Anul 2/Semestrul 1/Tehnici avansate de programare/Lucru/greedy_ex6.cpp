/*
Intr-o facultate, fiecarui student dintr-o serie ii sunt repartizate in cadrul primei
teme de laborator la Tehnici de programare cate 3 probleme dintr-o lista data.
Cunoscand timpii de evaluare ai fiecarei probleme dintre cele n din lista, precum
si distributia problemelor pe fiecare student in parte, ajutati profesorii evaluatori
sa stabileasca ordinea de evaluare a temelor astfel incat sa se minimizeze timpul
mediu de asteptare a notelor.
*/

#include <iostream>

using namespace std;

struct student
{
    int id;
    float t1,t2,t3;

};
float timp_total(student a)
{
    return a.t1+a.t2+a.t3;
}

int main()
{
    int  n, i, j;
    student stud[100], aux;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> stud[i].id >> stud[i].t1 >> stud[i].t2 >> stud[i].t3;
    }

    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(timp_total(stud[i])>timp_total(stud[j]))
            {
                aux = stud[i];
                stud[i] = stud[j];
                stud[j] = aux;
            }
        }
    }

    for(i=1; i<=n; i++)
    {

        cout << stud[i].id << " " << stud[i].t1 << " " << stud[i].t2 << " " << stud[i].t3 <<" "<<timp_total(stud[i]) << endl;
    }


}
