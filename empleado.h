//
// Created by nicor on 14/11/2018.
//

#ifndef DIVERSIONTOTAL_EMPLEADO_H
#define DIVERSIONTOTAL_EMPLEADO_H

#include <string>
using namespace std;


class empleado {
protected:
    string usuario;
    string clave;
    string nombre;
    string apellido;
    int DNI;
    bool estado;

public:
    empleado(const string &usuario, const string &clave, const string &nombre, const string &apellido, int DNI);
    empleado();

    int getDNI();

    virtual void darDeBaja() = 0;

};


#endif //DIVERSIONTOTAL_EMPLEADO_H
