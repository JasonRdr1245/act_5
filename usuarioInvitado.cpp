#include "usuarioInvitado.hpp"
UsuarioInvitado::UsuarioInvitado(/* args */):Usuario("*","*","*","*","invitado")
{
}

UsuarioInvitado::~UsuarioInvitado()
{
}
void UsuarioInvitado::funcionVirtualPure(){}
float UsuarioInvitado::getPagoPrestamo(){
    return this->PagoPorPrestamo;
}