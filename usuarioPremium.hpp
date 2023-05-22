#pragma once
#include "usuario.hpp"
class UsuarioPremium:public Usuario
{
private:
    float descuento=30.0/100.0;
    float pagoMensual=30.0;
public:
    UsuarioPremium(/* args */);
    UsuarioPremium(std::string _nombreCompleto,std::string _dni,std::string _correo,std::string _contrasena);
    ~UsuarioPremium();
    float getDescuento();
    float getPagoMensual();
};


