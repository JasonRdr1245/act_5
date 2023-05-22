#pragma once
class BibliotecaService;
class Usuario;
class Validators;
#include "bibliotecaService.hpp"
#include "materialBibliografico.hpp"
#include "usuario.hpp"
#include "libro.hpp"

class Biblioteca {
private:
  float fondo {0.0};
  std::vector<Usuario*> usuariosContainer;
  std::vector<MaterialBibliografico*> materialBibliograficoContainer;
public:
  friend class Validators;
  friend void BibliotecaService::mostrarLibrosPrestados(Biblioteca&);
  Biblioteca();
  void agregarUsuario();//es una composicion ya que al eliminar la biblioteca se eliminan los usuarios
  void agregarMaterialBibliografico(MaterialBibliografico& material);
  void mostrarTodoMaterial();
  void mostrarLibros();
  void prestarMaterial(Usuario* user,std::string _autor,std:: string _titulo);
  void mostrarMaterialPrestado();
  std::vector<MaterialBibliografico*> getMaterialBibliografico();
  std::vector<Usuario*> getUsuarios();
};
#include "validators.hpp"

