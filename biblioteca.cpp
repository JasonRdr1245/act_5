#include "biblioteca.hpp"
Biblioteca::Biblioteca(){
  this->materialBibliograficoContainer.push_back(new Libro("Don Quijote de la Mancha","Miguel de Cervantes","arcz","13/04/1954","literario","1234-2134"));
  this->usuariosContainer={
    {UsuarioInvitado()},
  };
}
void Biblioteca::agregarUsuario(){
  std::string nombre,dni,correo,contrasena;
  std::cout<<"ingrese nombre"<<std::endl;
  std::cin>>nombre;
  std::cout<<"ingrese dni"<<std::endl;
  std::cin>>dni;
  std::cout<<"ingrese correo"<<std::endl;
  std::cin>>correo;
  std::cout<<"ingrese contraseña"<<std::endl;
  std::cin>>contrasena;
  this->usuariosContainer.push_back(UsuarioPremium(nombre,dni,correo,contrasena));
}

void Biblioteca::agregarMaterialBibliografico(MaterialBibliografico& material){}

void Biblioteca::mostrarLibros(){

}
void Biblioteca::mostrarTodoMaterial(){
  for (const auto& material:this->materialBibliograficoContainer)
  {
    material->imprimir();
  }
}
void Biblioteca::solicitarLibro(std::string autor,std:: string titulo){

}

void Biblioteca::devolverLibro(std::string autor,std:: string titulo){

}