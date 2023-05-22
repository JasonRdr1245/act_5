#include "usuario.hpp"
Usuario::Usuario(){}
Usuario::~Usuario(){}
Usuario::Usuario(std::string _nombreCompleto,std::string _dni,std::string _correo,std::string _contrasena,std::string _nivel)
    :nombreCompleto(_nombreCompleto),dni(_dni),correo(_correo),contrasena(_contrasena),nivel(_nivel){
}
