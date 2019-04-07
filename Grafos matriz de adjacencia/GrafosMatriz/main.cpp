#include <iostream>
#include <fstream>
using namespace std;


void AbraArquivo(char *argv[],int argc) //abrindo arquivo de entrada
{
    if(argc==1)
    {
        return;
    }
    fstream arquivo;
    arquivo.open(argv[1]); // Poosicao 0 de argv tem se o nome do arquivo que
        //esta sendo utilizado,1 tem o arquivo de entrada e 2 arquivo de saida
    if(arquivo.is_open())
    {
        cout<<"Esta funcionando";
        string frase;
        getline(arquivo,frase);
    }
    else{
     cout<<"Erro ao abrir o arquivo";
    }
}

int main(int argc,char *argv[]) // argc tamanho do argv e o outro quais sao seus argumentos (nome do arquivo de entrada e saida)
{
    AbraArquivo(argv,argc);
    return 0;
}

