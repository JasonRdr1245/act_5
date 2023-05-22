#include "libro.hpp"
Libro::Libro(std::string _titulo,std::string _autor,std::string _editorial,std::string _fechaPublicacion,std::string _genero,std::string _isbn)
    :MaterialBibliografico(_titulo,_autor,_editorial,_fechaPublicacion),genero(_genero),isbn(_isbn){
    this->estaDisponible=true;
}
std::ostream& operator<<(std::ostream& os, const Libro& libro) {
    os<<"autor: "<< libro.autor <<std::endl;
    os<<"titulo: "<< libro.titulo <<std::endl;
    os<<"editorial: "<<libro.editorial<<std::endl;
    os<<"fechaPublicacion: "<<libro.fechaPublicacion<<std::endl;
    os<<"genero: "<<libro.genero<<std::endl;
    os<<"isbn: "<<libro.isbn<<std::endl<<std::endl;
    return os;
}
std::string Libro::getIsbn(){
    return this->getIsbn();
}
void Libro::imprimir() const{
    std::cout<<*this;
}