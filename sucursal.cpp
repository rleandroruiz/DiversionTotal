//
// Created by nicor on 12/11/2018.
//

#include "sucursal.h"

sucursal::~sucursal() {

}



 cliente sucursal::getCliente(int idCliente) {
    for(int i = 0; i < listaDeClientes.size(); i++){
        if(listaDeClientes[i].getid() == idCliente)
            return listaDeClientes[i];
    }
    return listaDeClientes[0];
}

void sucursal::darDeAltaCliente(int DNI, const string &nombre, const string &apellido, const string &nickname) {

    listaDeClientes.emplace_back(DNI, nombre, apellido, nickname);
}

void
sucursal::darDeAltaEmpleado(const string &usuario, const string &clave, const string &nombre, const string &apellido,
                            int DNI) {

    listaDeEmpleadosGenerales.emplace_back(usuario, clave, nombre, apellido, DNI);

}

empleadoGeneral sucursal::getEmpleado(int dni) {
    for(int i = 0; i < listaDeEmpleadosGenerales.size(); i++){
        if(listaDeEmpleadosGenerales[i].getDNI() == dni)
            return listaDeEmpleadosGenerales[i];
    }
    return listaDeEmpleadosGenerales[0];
}

//void sucursal::darDeAltaAdministrador(const string &usuario, const string &clave, const string &nombre,
//                                      const string &apellido, int DNI) {
//    miAdministrador = new administrador(usuario,clave,nombre,apellido,DNI);
//}

sucursal::sucursal(const string &ciudad, const string &direccion) : ciudad(ciudad), direccion(direccion) {

    idSucursal = (rand() %100) + 1;
}
