#pragma once
class BibliotecaService;
class Validators;
#include "bibliotecaService.hpp"
#include "materialBibliografico.hpp"
#include "usuario.hpp"
#include "libro.hpp"
class Biblioteca {
private:
  float fondo {0.0};
  std::vector<Usuario> usuariosContainer;
  std::vector<MaterialBibliografico*> materialBibliograficoContainer;
public:
  friend void BibliotecaService::mostrarLibrosPrestados(Biblioteca&);
  friend bool Validators::validarUsuario(Biblioteca &);
  Biblioteca();
  void agregarUsuario();//es una composicion ya que al eliminar la biblioteca se eliminan los usuarios
  void agregarMaterialBibliografico(MaterialBibliografico& material);
  void mostrarTodoMaterial();
  void mostrarLibros();
  void solicitarLibro(std::string autor,std:: string titulo);
  void devolverLibro(std::string autor,std:: string titulo);
};
#include "validators.hpp"

