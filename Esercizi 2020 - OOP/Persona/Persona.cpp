#include "Persona.h"
#include <iostream>
#include <string.h>

using namespace std;

Persona::Persona(string nome, string cognome) {
    this->nome = nome;
    this->cognome = cognome;
}

void Persona::hello() {
    cout << "Ciao sono: " + this->cognome + " " + this->cognome << endl;
}