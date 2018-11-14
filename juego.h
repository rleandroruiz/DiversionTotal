//
// Created by nicor on 14/11/2018.
//

#ifndef DIVERSIONTOTAL_JUEGO_H
#define DIVERSIONTOTAL_JUEGO_H

#include <string>
#include "mantenimiento.h"
using namespace std;

class juego {
private:
    int idJuego;
    string estado;
    string nombre;
    float costo;
    int puntosPorPuntaje;
    mantenimiento mantenimientos[5];

public:
    void reiniciar();
    string verEstado();
    void activar();
    void desactivar();
    virtual void jugar() = 0;
    void hacerMantenimiento();
    mantenimiento* verMantenimientos();

};


#endif //DIVERSIONTOTAL_JUEGO_H
