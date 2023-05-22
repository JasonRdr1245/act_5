#pragma once
#include "usuario.hpp"
class UsuarioInvitado:public Usuario
{
private:
    float PagoPorPrestamo=5.0;
public:
    UsuarioInvitado();
    ~UsuarioInvitado();
};


