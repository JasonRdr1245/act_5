#pragma once

class Biblioteca;
class Libro;
class MaterialBibliografico;
class BibliotecaService {
public:
  void mostrarLibrosPrestados(Biblioteca& biblioteca);
  bool isBook(MaterialBibliografico &material);
};
#include "materialBibliografico.hpp"
#include "biblioteca.hpp"