#include <iostream>
#include <string.h>
#include "estructura.h"

#define MAX 100
using namespace std;

categoria categorias[MAX];
int pos = 0;

void agregarCat(int id, char nombre[]);
void mostrarCat(int i);
void mostrarCats();
bool existeCat(int id);
void eliminarCat(int id);
void editarCat(int id, char nombre[]);
void reordenar(int i);

void agregarCat(int id, char nombre[])
{
    categorias[pos].idCat = id;
    strcpy(categorias[pos].nombre, nombre);
    pos++;
}

void mostrarCat(int i)
{
    cout << "ID: " << categorias[i].idCat << endl;
    cout << "Nombre: " << (categorias[i].nombre);
}

void mostrarCats()
{
    for (int i = 0; i < pos; i++)
    {
        cout << "ID: " << categorias[i].idCat << endl;
        cout << "Nombre: " << (categorias[i].nombre);
    }
}

bool existeCat(int id)
{
    bool existe = false;
    int i = 0;
    while (i < pos)
    {
        if (categorias[i].idCat == id)
        {
            existe = true;
            break;
        }
        i++;
    }
    return existe;
}

void eliminarCat(int id)
{
    if (existeCat(id))
    {
    }
    else
    {
        cout << "Error: No existe el codigo indicado" << endl;
    }
}

void reordenar(int i)
{
    for (int i = 0; i < pos; i++)
    {
        
    }
    
}