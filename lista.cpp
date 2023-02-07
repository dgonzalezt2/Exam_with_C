#include <iostream>
#include <string>
#include "lista.h"
#include "nodo.h"
#include "letra.h"
using namespace std;

Lista::Lista(Nodo *nodo)
{
    this->cabeza = nodo;
}
void Lista::adicionar(Nodo *nodo)
{
    Nodo *temp = this->cabeza;
    while (temp->sig)
    {
        temp = temp->sig;
    }
    temp->sig = nodo;
    nodo->sig = NULL;
}
Lista Lista::letrasEnImpares()
{   
    Nodo *temporal=this->cabeza;
    Lista *temp=new Lista(temporal);
    
    while(temporal){
        cout<<temporal->letra->pos<<endl;
        if(temporal->letra->pos % 2==1){
            temp->adicionar(temporal);
        }
        temporal=temporal->sig;
    }
    return *temp;
}
string Lista::listar()
{
    Nodo *temp = this->cabeza;
    string lista;
    while (temp)
    {
        lista = lista + temp->verNodo();
        temp = temp->sig;
    }
    lista += "NULL";
    return lista;
}

int Lista::cantidad_vocales()
{
    int vocales=0;
    Nodo *temp = this->cabeza;

    while (temp)
    {
        if (0 != temp->letra->getVocales())
        {
            vocales++;
        }

        temp = temp->sig;
    }

    return vocales;
}