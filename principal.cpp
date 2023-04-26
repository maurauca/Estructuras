#include <iostream>
#include "estructura.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int cant;
    cout << "Dime cuantas categorias deseas agregar: " << endl;
    cin >> cant;
    for (int i = 0; i < cant; i++)
    {
        cout << "Ingresa el id: " << endl;
        cin >> categorias[i].idCat;
        cout << "Ingrese el nombre" << endl;
        cin >> categorias[i].nombre;
    }
    
    cout << " \n \n \n" << endl; 
    cout << "Mostrar categorias" << endl;
    cout << "================================" << endl;
    for (int i = 0; i < cant; i++)
    {
        cout << "ID: " << categorias[i].idCat << endl;
        cout << "Nombre: " << categorias[i].nombre << endl;
        cout << "================================" << endl;
    }
    
    


    return 0;
}
