//
// Created by nicor on 14/11/2018.
//

#ifndef DIVERSIONTOTAL_PAGO_H
#define DIVERSIONTOTAL_PAGO_H

#include <string>
#include <cstdlib>
using namespace std;

class pago {
private:
    int idPago;
    string tipo;
    float monto;

public:
    pago(const string &tipo, float monto);

};


#endif //DIVERSIONTOTAL_PAGO_H
