#include <iostream>
#pragma once
#include "letra.h"
using namespace std;
//En nodo.h viene la descripcion de la clase

class Nodo
{
private:
public:
    
    Letra *letra;
    Nodo *sig;

    Nodo(Letra *letra,Nodo *sig=NULL);
    string verNodo();
};