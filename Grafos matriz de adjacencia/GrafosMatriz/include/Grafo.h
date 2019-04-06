#ifndef GRAFO_H
#define GRAFO_H
#include "No.h"


class Grafo
{
    public:
        Grafo();
        virtual ~Grafo();
        Grafo(bool direcionado, bool ponderado, bool ponderadoAresta);
        int  getOrdem ();
        void  setOrdem (int ordem);
        int  getGrau ();
        void  setGrau ( int grau);
        bool  getDirecionado ();
        void  setDirecionado ( bool direcionado);
        bool  getPonderado ();
        void  setPonderado ( bool ponderado);
        bool  getPonderadoAresta ();
        void  setPonderadoAresta ( bool ponderadoAresta);
        void  imprimeMatrizAdjacencia (int ordem);
        /*void  adicionarVertice (não * não);
        Não * getVertice ( int id);
        bool  possuiAresta ( int id1, int id2);
        Aresta * getAresta ( int id1, int id2);
        bool  verificaId ( int id);*/

    private:
        No *nos;
        int ordem;
        int aresta;
        int grau;
        bool direcionado;
        bool ponderado;
        bool ponderadoAresta;

};

#endif // GRAFO_H
