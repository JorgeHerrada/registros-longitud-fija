#ifndef PELICULA_H
#define PELICULA_H

#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Pelicula
{
public:
    char nombre[35], duracion[5], categoria[20], clasificacion[5], estreno[6], director[35];
    unsigned int contador = 0;
    void Capturar();
    void Imprimir();
    void Buscar();
    void Eliminar();
    void Modificar();
    int size();
};


#endif