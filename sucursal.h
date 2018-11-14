//
// Created by nicor on 12/11/2018.
//

#ifndef DIVERSIONTOTAL_SUCURSAL_H
#define DIVERSIONTOTAL_SUCURSAL_H

#include <string>
#include "administrador.h"
#include "empleadoGeneral.h"
#include "personalDeMantenimiento.h"
#include "supervisor.h"
#include "juegoEstandar.h"
#include "juegoEspecial.h"
#include "cliente.h"
#include "promocion.h"
#include "premio.h"
#include <cstring>
#include <vector>

using namespace std;

class sucursal {
private:
    int idSucursal;
    string ciudad;
    string direccion;
    administrador miAdministrador;
    vector<empleadoGeneral> listaDeEmpleadosGenerales;
    vector<personalDeMantenimiento> listaDePersonalDeMantenimiento;
    vector<supervisor> listaDeSupervisores;
    vector<juegoEstandar> listaDeJuegosEstandar;
    vector<juegoEspecial> listaDeJuegoEspeciales;
    vector<cliente> listaDeClientes;
    vector<promocion> listaDePromociones;
    vector<premio> listaDePremios;

public:
    sucursal(const string &ciudad, const string &direccion);

    virtual ~sucursal();

    bool iniciarSesion(string usuario, int clave);
    void darDeAltaAdministrador(const string &usuario, const string &clave, const string &nombre, const string &apellido, int DNI);
    void darDeAltaEmpleado(const string &usuario, const string &clave, const string &nombre, const string &apellido, int DNI);
    empleadoGeneral getEmpleado(int dni);
    void darDeAltaCliente(int DNI, const string &nombre, const string &apellido, const string &nickname);
    cliente getCliente(int idCliente);
    void darDeAltaJuego();
    juegoEstandar getJuegoEstandar();
    juegoEspecial getJuegoEspecial();
    void setPromociones();
    promocion* getPromociones();
    void setPremios();
    premio* getPremios();
    void canjearPremio(int idPremio);
    void sacarBalanceMensual();
};


#endif //DIVERSIONTOTAL_SUCURSAL_H
