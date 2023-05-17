#include "libro.hpp"
Libro::Libro(std::string _autor, std::string _titulo):autor(_autor),titulo(_titulo){
    this->estaDisponible=true;
}
std::ostream& operator<<(std::ostream& os, const Libro& libro) {
    os << libro.autor << " " << libro.titulo << " " ;
    return os;
}