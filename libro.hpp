#pragma once
class BibliotecaService;
class Biblioteca;
#include "materialBibliografico.hpp"
#include "bibliotecaService.hpp"
class Libro:public MaterialBibliografico {
private:
  friend class Biblioteca;
  std::string genero;
  std::string isbn;
public:
  Libro(std::string _titulo,std::string _autor,std::string _editorial,std::string _fechaPublicacion,std::string genero,std::string isbn);
  friend void BibliotecaService::mostrarLibrosPrestados(Biblioteca& biblioteca);
  friend std::ostream& operator<<(std::ostream& os, const Libro& libro);
  std::string getIsbn();
  void imprimir() const override;
};
