#ifndef NO_H
#define NO_H



class No
{
    public:
        No();
        virtual ~No();

    private:
        int id;
        float peso;
        int grau;
        int grauEntrada;
        int grauSaida;
        No *proximo;
        Aresta *adjacente;
        void adicionarAdjacente(Aresta *aresta);
        bool vazioAdjacente();
};

#endif // NO_H
