template<class T> class Vectorul
{
    int dim;
    T* pv;

public:
    Vectorul(int n);
    void afisare();
    T& operator[](int i);

};
