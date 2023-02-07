#include <iostream>
#include <string>
#include "letra.h"
using namespace std;

Letra::Letra(string letter, int pos)
{
    this->letter = letter;
    this->pos = pos;
}

int Letra::getVocales()
{
    int contador = 0;
    if (this->letter == "a")
    {
        contador = 1;
    }
    if (this->letter == "e")
    {
        contador = 1;
    }
    if (this->letter == "i")
    {
        contador = 1;
    }
    if (this->letter == "o")
    {
        contador = 1;
    }
    if (this->letter == "u")
    {
        contador = 1;
    }

    if (this->letter == "A")
    {
        contador = 1;
    }
    if (this->letter == "E")
    {
        contador = 1;
    }
    if (this->letter == "I")
    {
        contador = 1;
    }
    if (this->letter == "O")
    {
        contador = 1;
    }
    if (this->letter == "U")
    {
        contador = 1;
    }

    return contador;
}
