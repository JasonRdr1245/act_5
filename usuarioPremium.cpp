#include "usuarioPremium.hpp"
UsuarioPremium::UsuarioPremium(/* args */)
{
}
UsuarioPremium::UsuarioPremium(std::string _nombreCompleto,std::string _dni,std::string _correo,std::string _contrasena)
    :Usuario(_nombreCompleto,_dni,_correo,_contrasena,"premium"){

}
float UsuarioPremium::getDescuento(){
    return this->descuento;
}
float UsuarioPremium::getPagoMensual(){
    return this->pagoMensual;
}
UsuarioPremium::~UsuarioPremium()
{
}