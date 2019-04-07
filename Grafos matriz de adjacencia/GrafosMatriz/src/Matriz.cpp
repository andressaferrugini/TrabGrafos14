#include "Matriz.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Matriz::Matriz(int tam)//calcular tam
{
    tamanho=tam;
    mat = new float* [tamanho];
    for(int i=0; i<tamanho; i++)
        mat[i]= new float [tamanho];
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            mat[i][j] = 0;
        }
    }
}

Matriz::~Matriz(){
    for(int i=0; i<tamanho; i++){
        delete [] mat[i];
    }
    delete [] mat;
}

void Matriz::setAresta(int i, int j, float peso){//se aresta nao ponderado peso 1 -chama main
    if(i<tamanho && j<tamanho)
    {
        mat[i][j] = peso;
        mat[j][i] = peso;
    }
    else
        cout << "Índice inválido!" << endl;

}
void Matriz::setArestaDirecionado(int i, int j, float peso){//se aresta nao ponderado peso 1
    if(i<tamanho && j<tamanho)
    {
        mat[i][j] = peso;
    }
    else
        cout << "Índice inválido!" << endl;

}

float Matriz::getPesoAresta(int i, int j){
    if(mat[i][j]!=0)//ver se tem aresta
        return mat[i][j];
}

void Matriz::imprimeMatrizAdjacencia(){
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
                cout << mat[i][j]<<" ";
        }
        cout<< endl;
    }
}
