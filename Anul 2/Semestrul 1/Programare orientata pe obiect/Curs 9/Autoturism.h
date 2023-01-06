#include "Autovehicul.h"
class Autoturism:public Autovehicul
{
public:
    Autoturism();
    Autoturism(char* marca, int capacitate, double putere, double masa);
    virtual double calculImpozit ();
    virtual double calculRovinieta();
};