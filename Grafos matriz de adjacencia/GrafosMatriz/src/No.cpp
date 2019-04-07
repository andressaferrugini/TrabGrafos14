#include "No.h"

No::No(int id)
{
    this->id = id;
    this->grauEntrada = 0;
    this->grauSaida = 0;
    this->proxNo = NULL;
}

No::No(int id, float peso)
{
    this->id = id;
    this->grauEntrada = 0;
    this->grauSaida = 0;
    this->proxNo = NULL;
    this->peso = peso;
}

No::~No(){}

void No::setId(int id) {
    this->id = id;
}
int No::getId() {
    return this->id;
}

void No::setPeso(int val) {
    this->peso = val;
}
int No::getPeso() {
    return this->peso;
}


