//
// Created by nicor on 14/11/2018.
//

#ifndef DIVERSIONTOTAL_CLIENTE_H
#define DIVERSIONTOTAL_CLIENTE_H

#include <string>
#include "tarjeta.h"
#include "transaccion.h"
using namespace std;

class cliente {
private:
    int idCliente;
    int DNI;
    string nombre;
    string apellido;
    string nickname;
    tarjeta *miTarjeta;
    transaccion *misTransacciones[10];

public:
    cliente();
    cliente(int DNI, const string &nombre, const string &apellido, const string &nickname);

    void vincularTarjeta();
    void generarTransaccion(string tipoTransacion, float monto, empleadoGeneral miEmpleado, string tipoPago);
    void generarTransaccion(string tipoTransaccion, empleadoGeneral miEmpleado, string tipoPago);
    int getid();

};


#endif //DIVERSIONTOTAL_CLIENTE_H
