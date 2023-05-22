#include "biblioteca.hpp"
Biblioteca::Biblioteca(){
  this->materialBibliograficoContainer.push_back(new Libro("Don Quijote de la Mancha","Miguel de Cervantes","arcz","13/04/1954","literario","1234-2134"));
  this->usuariosContainer.push_back(new UsuarioInvitado());
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
  this->usuariosContainer.push_back(new UsuarioPremium(nombre,dni,correo,contrasena));
}

void Biblioteca::agregarMaterialBibliografico(MaterialBibliografico& material){}

void Biblioteca::mostrarLibros(){

}
void Biblioteca::mostrarTodoMaterial(){
  for (const auto& material:this->materialBibliograficoContainer)
  {
    if (material->estaDisponible)
    {
      material->imprimir();
    }
    
    
  }
}
void Biblioteca::prestarMaterial(Usuario* user,std::string _autor,std:: string _titulo){
  if (UsuarioInvitado* usuario=dynamic_cast<UsuarioInvitado*>(user))
  {
    for (MaterialBibliografico* material:this->materialBibliograficoContainer)
    {
      if (material->autor==_autor && material->titulo==_titulo && material->estaDisponible)
      {
        std::cout<<"libro prestado"<<std::endl;
        this->fondo=this->fondo+usuario->getPagoPrestamo();
        material->estaDisponible=false;
      }
      if (material->autor==_autor && material->titulo==_titulo && !material->estaDisponible)
      {
        std::cout<<"libro encontrado pero no disponible"<<std::endl;
        return;
      }
      
    }
    std::cout<<"libro no encontrado"<<std::endl;
    
  }
  else if(UsuarioPremium* usuario=dynamic_cast<UsuarioPremium*>(user)){
    for (MaterialBibliografico* material:this->materialBibliograficoContainer)
    {
      if (material->autor==_autor && material->titulo==_titulo && material->estaDisponible)
      {
        std::cout<<"libro prestado"<<std::endl;
        material->estaDisponible=false;
      }
      if (material->autor==_autor && material->titulo==_titulo && !material->estaDisponible)
      {
        std::cout<<"libro encontrado pero no disponible"<<std::endl;
        return;
      }
      
    }
    std::cout<<"libro no encontrado"<<std::endl;
  }
  else{
    std::cout<<"conversion no valida"<<std::endl;
  }
}

std::vector<MaterialBibliografico*> Biblioteca::getMaterialBibliografico(){
  return this->materialBibliograficoContainer;
}
std::vector<Usuario*> Biblioteca::getUsuarios(){
  return this->usuariosContainer;
}
void Biblioteca::mostrarMaterialPrestado(){
  for (const auto& material:this->materialBibliograficoContainer)
  {
    if (!material->estaDisponible)
    {
      material->imprimir();
    }
    
    
  }
}