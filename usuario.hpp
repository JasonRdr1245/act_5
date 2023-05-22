#pragma once
#include "validators.hpp"
class Usuario
{
protected:
    std::string nombreCompleto;
    std::string dni;
    std::string correo;
    std::string contrasena;
    std::string nivel;
public:
    friend class Validators;
    Usuario();
    Usuario(std::string _nombreCompleto,std::string _dni,std::string _correo,std::string _contrasena,std::string _nivel);
    ~Usuario();
};

