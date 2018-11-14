//
// Created by nicor on 14/11/2018.
//

#include "empleado.h"

empleado::empleado(const string &usuario, const string &clave, const string &nombre, const string &apellido,
                        int DNI) : usuario(usuario), clave(clave), nombre(nombre), apellido(apellido), DNI(DNI) {
    estado = 0;
}

int empleado::getDNI() {
    return DNI;
}

empleado::empleado() {

}
