#include <string>
#include <iostream>
#include "letra.h"
#include "nodo.h"
#include "lista.h"

using namespace std;

int main(){
    Lista *nombre=new Lista(new Nodo(new Letra("D",1)));
    
    nombre->adicionar(new Nodo(new Letra("a",2)));
    nombre->adicionar(new Nodo(new Letra("v",3)));
    nombre->adicionar(new Nodo(new Letra("i",4)));
    nombre->adicionar(new Nodo(new Letra("d",5)));
    nombre->adicionar(new Nodo(new Letra("G",6)));
    nombre->adicionar(new Nodo(new Letra("o",7)));
    nombre->adicionar(new Nodo(new Letra("n",8)));
    nombre->adicionar(new Nodo(new Letra("z",9)));
    nombre->adicionar(new Nodo(new Letra("a",10)));
    nombre->adicionar(new Nodo(new Letra("l",11)));
    nombre->adicionar(new Nodo(new Letra("e",12)));
    nombre->adicionar(new Nodo(new Letra("z",13)));
    
   cout<<nombre->listar()<<endl;*/
    Lista nombreImpar=nombre->letrasEnImpares();
    cout<<nombreImpar.listar()<<endl;

    cout<<"Numero de vocales: "<<nombre->cantidad_vocales()<<endl;*/
    return 0;
}