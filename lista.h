#pragma once
#include <iostream>
#include <string>
#pragma once
#include "nodo.h"
#include "letra.h"
using namespace std;

class Lista
{
private:
public:
    Nodo *cabeza;
    Lista(Nodo *nodo);
    Lista letrasEnImpares();
    string listar();
    int cantidad_vocales();
    void adicionar(Nodo *nodo);

};