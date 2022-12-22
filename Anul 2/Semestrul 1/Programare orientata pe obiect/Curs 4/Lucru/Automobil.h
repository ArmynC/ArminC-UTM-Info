//declaratia clasei
class Automobil
{
    char* marca;
    int capacitate;
    double pret;
    static double TVA;//declarata
    static int nrAuto;

public:
    Automobil();
    Automobil(char *marca, int capacitate, double pret);
    Automobil(const Automobil& sursa);

    void afisare();
    ~Automobil();

    void setMarca(char *val);
    void setCapacitatea(int val);
    void setPret(double val);
    static void setTVA(double val);

    char* getMarca();
    int   getCapacitate();
    double getPret();
    static double getTVA();
    static int getNrAuto();

    double calculPretTVA();


};
