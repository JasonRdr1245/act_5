#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

#include "validators.hpp"

#include "materialBibliografico.hpp"
#include "biblioteca.hpp"
#include "usuario.hpp"
#include "usuarioInvitado.hpp"
#include "usuarioPremium.hpp"
#include "libro.hpp"
#include "bibliotecaService.hpp"
#include "usuarioPremium.cpp"
#include "validators.cpp"
#include "usuarioInvitado.cpp"
#include "materialBibliografico.cpp"
#include "biblioteca.cpp"
#include "usuario.cpp"
#include "libro.cpp"
#include "bibliotecaService.cpp"

using namespace std;



int main() {
  Biblioteca biblioteca;
  BibliotecaService amigoBiblioteca;
  Validators valid;
  int opcion=1;
  while (opcion>=1 ||opcion<=3)
  {
    std::cout << "MENU" << std::endl;
    std::cout << "1. Registrar" << std::endl;
    std::cout << "2. Login" << std::endl;
    std::cout << "3. Ingresar como usuario invitado" << std::endl;
    std::cout << "4. Salir"<<std::endl;
    std::cout << "Ingrese una opción (1-4): ";
    std::cin >> opcion;
    if (opcion==1)
    {
      biblioteca.agregarUsuario();
    }
    if (opcion==2)
    {
      if (valid.validarUsuario(biblioteca))
      {
        #include "menuComponent"
      }
      
      
    }
    if (opcion==3)
    {
      #include "menuComponent"
    }
    if (opcion==4)
    {
      cout<<"saliendo....";
    }
  }
  

  


  return 0;

}