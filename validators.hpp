#pragma once
#include "usuario.hpp"
class Biblioteca;
class Validators
{
private:
    /* data */
public:
    Validators(/* args */);
    bool validarUsuario(Biblioteca& bliblioteca,Usuario* user);
    ~Validators();
};
#include "biblioteca.hpp"


