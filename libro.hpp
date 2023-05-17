#pragma once
class BibliotecaService;
class Biblioteca;
#include "bibliotecaService.hpp"
class Libro {
private:
  friend class Biblioteca;
  std::string autor;
  std::string titulo;
  bool estaDisponible;
public:
  Libro(std::string _autor,std::string _titulo);
  friend void BibliotecaService::mostrarLibrosPrestados(Biblioteca& biblioteca);
  friend std::ostream& operator<<(std::ostream& os, const Libro& libro);
};
