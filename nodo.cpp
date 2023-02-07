
#include "nodo.h"
#include "letra.h"
#include <string>
#include <iostream>
using namespace std;


Nodo::Nodo(Letra *letra,Nodo *sig){
    this->letra=letra;
    this->sig=sig;
}

string Nodo::verNodo()
{   
    string texto = "['";
    texto= texto+this->letra->letter;
    texto+="', ";
    texto= texto+to_string(this->letra->pos)+"]->";
    return texto;
}