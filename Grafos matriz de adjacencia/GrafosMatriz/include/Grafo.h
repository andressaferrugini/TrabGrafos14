#ifndef GRAFO_H
#define GRAFO_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <sstream>
#include "No.h"
#include "Matriz.h"


class Grafo
{
    public:
        Grafo();
        Grafo(bool direcionado, bool ponderado, bool ponderadoAresta);
        virtual ~Grafo();
        int getOrdem();
        int getGrau();
        void setOrdem(int ordem);
        void addNo();
        void getNo();

    private:
        no *nos;
        bool direcionado;
        bool ponderado;
        bool ponderadoAresta;
        int ordem;
        int aresta;
        int grau;
        Matriz *matrizAdjacencia;

};

#endif // GRAFO_H
