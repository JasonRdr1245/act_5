#include "libro.hpp"
Libro::Libro(std::string _titulo,std::string _autor,std::string _editorial,std::string _fechaPublicacion,std::string _genero,std::string _isbn)
    :MaterialBibliografico(_titulo,_autor,_editorial,_fechaPublicacion),genero(_genero),isbn(_isbn){
    this->estaDisponible=true;
}
std::ostream& operator<<(std::ostream& os, const Libro& libro) {
    os << libro.autor <<std::endl;
    os<< libro.titulo <<std::endl;
    //todo
    return os;
}
std::string Libro::getIsbn(){
    return this->getIsbn();
}
void Libro::imprimir() const{
    std::cout<<*this;
}