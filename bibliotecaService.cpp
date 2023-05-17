#include "bibliotecaService.hpp"
void BibliotecaService::mostrarLibrosPrestados(Biblioteca& biblioteca){
    for (Libro libro:biblioteca.libros) {
      if (!libro.estaDisponible) {
        std::cout << libro << std::endl;
      }
    }
}