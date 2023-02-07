#include <iostream>
#pragma once
using namespace std;

class Letra
{
private:
public:
    string letter;
    int pos;
    Letra(string letter, int pos);
    int getVocales();
};