#include <iostream>
#include "sucursal.h"
using namespace std;

int main() {
    int x, y;
    string z;

    int idCliente;
    sucursal centro("Córdoba", "Velez Sarsfield");
    centro.darDeAltaCliente(41000000, "Fulano", "Perez", "hackermann");
    centro.darDeAltaEmpleado("laburante01", "clave123", "Mengana", "Gonzales", 42000000);

    do{
    cout << "Bienvenido a Diversion Total" << endl;
    cout << "Qué desea hacer?"<< endl;
    cout << "1. Realizar recarga" << endl;
    cout << "2. Salir" << endl;
    cin >> x;
    switch(x){
        case 1:
            cout << "Ingrese el id del cliente" << endl;
            cin >> idCliente;
            cout << "Ingrese el monto a recargar" << endl;
            cin >> y;
            centro.getCliente(idCliente).generarTransaccion("recarga", y, centro.getEmpleado(42000000), z);
            break;
        default:
            break;

    }
    }while((x != 2));
    return 0;
}