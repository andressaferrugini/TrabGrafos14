#ifndef MATRIZ_H
#define MATRIZ_H
#include "Grafo.h"

class Matriz
{
    public:
        Matriz(int tam);
        virtual ~Matriz();
        void setAresta(int i, int j, float peso);
        void setArestaDirecionado(int i, int j, float peso);
        float getPesoAresta(int i, int j);
        void imprimeMatrizAdjacencia();

    private:
        float **mat; // matriz tam x tam
        int tamanho;
};

#endif // MATRIZ_H
