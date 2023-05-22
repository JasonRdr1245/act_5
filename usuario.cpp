#include "usuario.hpp"
Usuario::Usuario(){}
Usuario::~Usuario(){}
Usuario::Usuario(std::string _nombreCompleto,std::string _dni,std::string _correo,std::string _contrasena,std::string _nivel)
    :nombreCompleto(_nombreCompleto),dni(_dni),correo(_correo),contrasena(_contrasena),nivel(_nivel){
}
void Usuario::solicitarPrestamo(Biblioteca& biblioteca,std::string _autor,std::string _titulo){
    biblioteca.prestarMaterial(this,_autor,_titulo);
}
void Usuario::devolverMaterial(Biblioteca& biblioteca,std::string _autor,std::string _titulo){
    for (auto material:biblioteca.getMaterialBibliografico())
    {
        if (material->autor==_autor && material->titulo==_titulo && !material->estaDisponible)
        {
            material->estaDisponible=true;
            std::cout<<"devolviendo material"<<std::endl;
            return;

        }
        if (material->autor==_autor && material->titulo==_titulo && material->estaDisponible)
        {
            std::cout<<"el material no se puede devolver, esta en nuestra biblioteca"<<std::endl;
            return;
            
        }
    }
    std::cout<<"material no encontrado"<<std::endl;
    
}
