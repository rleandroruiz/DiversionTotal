//
// Created by nicor on 14/11/2018.
//

#include "pago.h"

pago::pago(const string &tipo, float monto) : tipo(tipo), monto(monto) {
    idPago = (rand() % 100) + 1;
}
