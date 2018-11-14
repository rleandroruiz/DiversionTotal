//
// Created by nicor on 14/11/2018.
//

#ifndef DIVERSIONTOTAL_TARJETA_H
#define DIVERSIONTOTAL_TARJETA_H

#include <cstdlib>

class tarjeta {
private:
    int idTarjeta;
    float saldo;
    int puntos;

public:
    tarjeta();
    void recargar(float monto);
    void descontarSaldo(float monto);
    void cargarPuntos(int cantidad);
    void descontarPuntos(int cantidad);

};


#endif //DIVERSIONTOTAL_TARJETA_H
