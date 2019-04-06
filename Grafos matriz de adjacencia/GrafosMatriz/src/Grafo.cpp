#include <iostream>
#include "Grafo.h"
#include <cstddef>
#include "stdio.h"
#include <vector>

using namespace std;

    Grafo::Grafo(){
        this->nos = NULL;
        this->direcionado = false;
        this->ponderado = false;
        this->ponderadoAresta = false;
    }


    Grafo::Grafo(bool direcionado, bool ponderado, bool ponderadoAresta) {
        this->nos = NULL;
        this->direcionado = direcionado;
        this->ponderado = ponderado;
        this->ponderadoAresta = ponderadoAresta;
    }

    Grafo::~Grafo() {}

    int  Grafo::getOrdem (){ /*N�mero de v�rtices*/
        return this->ordem;
    }

    void  Grafo::setOrdem (int ordem){
        this->ordem = ordem;
    }

    int  Grafo::getGrau (){ /*N�mero m�x de aresta, grau= soma linha matriz*/
         return this->grau;
    }

    void  Grafo::setGrau ( int grau){
        this->grau = grau;
    }

    bool  Grafo::getDirecionado (){
        return this->direcionado;
    }

    void  Grafo::setDirecionado ( bool direcionado){
        this->direcionado = direcionado;
    }

    bool  Grafo::getPonderado (){
        return this->ponderado;
    }

    void  Grafo::setPonderado ( bool ponderado){
        this->ponderado = ponderado;
    }

    bool  Grafo::getPonderadoAresta (){
        return this->ponderadoAresta;
    }

    void  Grafo::setPonderadoAresta ( bool ponderadoAresta){
          this->ponderadoAresta = ponderadoAresta;
    }

    void  Grafo::imprimeMatrizAdjacencia (int ordem){
        int matriz[ordem+1][ordem+1];
        for(int i=0; i<ordem; i++){
            for(int j=0; j<ordem; j++){
                matriz[i][j]= -1; //*1 - n�mero que indica aus�ncia de arestas entre eles//
            }
        }
        for(int i=0; i<ordem; i++){
            for(int j=0; j<ordem; j++){
                if(i==0&&j==0){
                    cout<<" ";
                }
                if((i==0&&j!=0)||(j==0&&i!=0)){


                    for(int k=0; k<ordem+1; k++){

                    }

                }
                if(this->direcionado){

                }
            }
        }
    }
