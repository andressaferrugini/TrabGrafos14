#include "No.h"

No::No() {
    this->proximo = NULL;
    this->adjacente = NULL;
}

No::No(int id) {
    this->id = id;
    No();
}

No::No(int id, float peso) {
    this->peso = peso;
    this->id = id;
    No();
}

No::~No() {}

int No::getId() {
    return this->id;
}

void No::setId(int id) {
    this->id = id;
}
