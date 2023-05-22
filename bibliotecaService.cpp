#include "bibliotecaService.hpp"
void BibliotecaService::mostrarLibrosPrestados(Biblioteca& biblioteca){

}
bool BibliotecaService::isBook(MaterialBibliografico* material){
    if (dynamic_cast<Libro*>(material) != nullptr) {
        // El dynamic_cast fue exitoso, el objeto es un libro
        // Realiza las acciones correspondientes
        return true;
    } else {
        // El dynamic_cast falló, el objeto no es un libro
        // Realiza las acciones correspondientes
        return false;
    }
}