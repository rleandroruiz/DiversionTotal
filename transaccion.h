//
// Created by nicor on 14/11/2018.
//

#ifndef DIVERSIONTOTAL_TRANSACCION_H
#define DIVERSIONTOTAL_TRANSACCION_H


#include "pago.h"
#include "empleadoGeneral.h"
#include <string>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

class transaccion {
private:
    int idTransaccion;
    char fecha[11];
    string tipoTransaccion;
    pago *miPago;
    empleadoGeneral miEmpleado;

public:
    transaccion(const string &tipoTransaccion, const empleadoGeneral &miEmpleado, string tipoPago);

    transaccion(const string &tipoTransaccion, float monto, const empleadoGeneral &miEmpleado, string tipoPago);

    pago getPago();


};


#endif //DIVERSIONTOTAL_TRANSACCION_H
