# cmake_minimum_required(VERSION <specify CMake version here>)
project(DiversionTotal)

set(CMAKE_CXX_STANDARD 14)

add_executable(DiversionTotal main.cpp sucursal.cpp sucursal.h promocion.cpp promocion.h premio.cpp premio.h cliente.cpp cliente.h empleado.cpp empleado.h administrador.cpp administrador.h personalDeMantenimiento.cpp personalDeMantenimiento.h empleadoGeneral.cpp empleadoGeneral.h supervisor.cpp supervisor.h tarjeta.cpp tarjeta.h transaccion.cpp transaccion.h pago.cpp pago.h juego.cpp juego.h mantenimiento.cpp mantenimiento.h juegoEstandar.cpp juegoEstandar.h juegoEspecial.cpp juegoEspecial.h)