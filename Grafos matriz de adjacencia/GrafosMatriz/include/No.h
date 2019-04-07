#ifndef NO_H
#define NO_H
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class No
{
    public:
        No(int id);
        No(int id, float peso);
        virtual ~No();

        void setId(int id);
        int getId();

        void setPeso(int val);
        int getPeso();

    private:
        int id;
        float peso;
        int grauEntrada;
        int grauSaida;
        No *proxNo;
};

#endif // NO_H
