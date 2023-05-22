#include "bibliotecaService.hpp"
void BibliotecaService::mostrarLibrosPrestados(Biblioteca& biblioteca){

}
bool BibliotecaService::isBook(MaterialBibliografico &material){
    try
    {
        material.getIsbn();
        return true;
    }
    catch(...)
    {
        return false;
    }
}