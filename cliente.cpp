//
// Created by nicor on 14/11/2018.
//

#include "cliente.h"

int cliente::getid() {
    return idCliente;
}

void cliente::generarTransaccion(string tipoTransaccion, empleadoGeneral miEmpleado, string tipoPago) {
  int x = sizeof(misTransacciones)/ sizeof(*misTransacciones);
  misTransacciones[x+1] = new transaccion(tipoTransaccion, miEmpleado, tipoPago);
  vincularTarjeta();
}

void cliente::generarTransaccion(string tipoTransaccion, float monto, empleadoGeneral miEmpleado, string tipoPago) {
    int x = sizeof(misTransacciones)/ sizeof(*misTransacciones);
    misTransacciones[x+1] = new transaccion(tipoTransaccion, monto, miEmpleado, tipoPago);
    miTarjeta->recargar(monto);
}

void cliente::vincularTarjeta() {
    miTarjeta = new tarjeta();
}

cliente::cliente(int DNI, const string &nombre, const string &apellido, const string &nickname) : DNI(DNI),
                                                                                                  nombre(nombre),
                                                                                                  apellido(apellido),
                                                                                                  nickname(nickname) {
    idCliente = (rand() % 100) + 1;
    vincularTarjeta();
}


