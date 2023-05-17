#pragma once
class Libro;
class BibliotecaService;
#include "bibliotecaService.hpp"
#include "libro.hpp"
class Biblioteca {
private:
  std::vector<Libro> libros;
public:
  friend void BibliotecaService::mostrarLibrosPrestados(Biblioteca&);
  Biblioteca();
  void mostrarLibros();
  void solicitarLibro(std::string autor,std:: string titulo);
  void devolverLibro(std::string autor,std:: string titulo);
};


