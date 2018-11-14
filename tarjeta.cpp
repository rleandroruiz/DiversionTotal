//
// Created by nicor on 14/11/2018.
//

#include "tarjeta.h"

void tarjeta::recargar(float monto) {
    saldo += monto;
}

tarjeta::tarjeta() {

    idTarjeta = (rand() % 100) + 1;
    saldo = 0;
    puntos = 0;

}
