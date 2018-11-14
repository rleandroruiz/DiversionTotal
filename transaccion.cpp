//
// Created by nicor on 14/11/2018.
//

#include "transaccion.h"

transaccion::transaccion(const string &tipoTransaccion, const empleadoGeneral &miEmpleado, string tipoPago) :
                                                                                                         tipoTransaccion(
                                                                                                                 tipoTransaccion),
                                                                                                         miEmpleado(
                                                                                                                 miEmpleado) {
    idTransaccion = (rand() % 100) + 1;

    time_t tiempo = time(NULL);
    struct tm *tlocal = localtime(&tiempo);
    strftime(fecha,10,"%d/%m/%y",tlocal);

    miPago = new pago(tipoPago, 60);

}

transaccion::transaccion(const string &tipoTransaccion, float monto, const empleadoGeneral &empleado, string tipoPago) :
                                                                                                 tipoTransaccion(
                                                                                                         tipoTransaccion),
                                                                                                 miEmpleado(miEmpleado) {
    idTransaccion = (rand() % 100) + 1;

    time_t tiempo = time(NULL);
    struct tm *tlocal = localtime(&tiempo);
    strftime(fecha,10,"%d/%m/%y",tlocal);

    miPago = new pago(tipoPago, monto);
}
