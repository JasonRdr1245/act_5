#include "validators.hpp"

Validators::Validators(/* args */)
{
}

bool Validators::validarUsuario(Biblioteca& bliblioteca,Usuario* user){
    std::string contrasena,correo;
    std::cout<<"ingrese correo:"<<std::endl;
    std::cin>>correo;
    std::cout<<"ingrese contrasena"<<std::endl;
    std::cin>>contrasena;
    for (auto usuario:bliblioteca.usuariosContainer)
    {
        if (usuario->correo==correo && usuario->contrasena==contrasena)
        {
            usuario=user;
            return true;
        }
        
    }
    std::cout<<"usuario no encontrado"<<std::endl;
    return false;
}

Validators::~Validators()
{
}
