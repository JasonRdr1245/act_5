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
  Usuario* ptrUsuario;
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
      if (valid.validarUsuario(biblioteca,ptrUsuario))
      {
        int opcion2{1};
        while (opcion2>=1 && opcion2<=4)
        {
            std::cout << "MENU" << std::endl;
            std::cout << "1. Mostrar" << std::endl;
            std::cout << "2. Prestarse" << std::endl;
            std::cout << "3. Mostrar material prestado" << std::endl;
            std::cout << "4. devolver material" << std::endl;
            std::cout << "5. salir" << std::endl;
            std::cout << "Ingrese una opción (1-3): ";
            std::cin >> opcion2;
            if (opcion2==1)
            {
                biblioteca.mostrarTodoMaterial();
            }
            if(opcion2==2){
              std::string autor,titulo;
              ptrUsuario=biblioteca.getUsuarios()[0];
              std::cout<<"ingrese autor"<<std::endl;
              cin.ignore();
              getline(cin,autor);
              std::cout<<"inrgese titulo"<<std::endl;
              getline(cin,titulo);
              ptrUsuario->solicitarPrestamo(biblioteca,autor,titulo);
            }
            if(opcion2==3){
              biblioteca.mostrarMaterialPrestado();
            }
            if(opcion2==4){
              std::string autor,titulo;
              ptrUsuario=biblioteca.getUsuarios()[0];
              std::cout<<"ingrese autor"<<std::endl;
              cin.ignore();
              getline(cin,autor);
              std::cout<<"inrgese titulo"<<std::endl;
              getline(cin,titulo);
              ptrUsuario->devolverMaterial(biblioteca,autor,titulo);
            }
            
            if(opcion2==5){
              cout<<"saliendo"<<endl;
              break;
            }    
            
        }
      }
      
    }
    if (opcion==3)
    {
      int opcion2{1};
      while (opcion2>=1 && opcion2<=5)
      {
        std::cout << "MENU" << std::endl;
        std::cout << "1. Mostrar" << std::endl;
        std::cout << "2. Prestarse" << std::endl;
        std::cout << "3. Mostrar material prestado" << std::endl;
        std::cout << "4. devolver material" << std::endl;
        std::cout << "5. salir" << std::endl;
        std::cout << "Ingrese una opción (1-5): ";
        std::cin >> opcion2;
        if (opcion2==1){
            biblioteca.mostrarTodoMaterial();
        }
        if(opcion2==2){
          std::string autor,titulo;
          ptrUsuario=biblioteca.getUsuarios()[0];
          std::cout<<"ingrese autor"<<std::endl;
          cin.ignore();
          getline(cin,autor);
          std::cout<<"inrgese titulo"<<std::endl;
          getline(cin,titulo);
          ptrUsuario->solicitarPrestamo(biblioteca,autor,titulo);
        }
        if(opcion2==3){
          biblioteca.mostrarMaterialPrestado();
        }
        if(opcion2==4){
          std::string autor,titulo;
          ptrUsuario=biblioteca.getUsuarios()[0];
          std::cout<<"ingrese autor"<<std::endl;
          cin.ignore();
          getline(cin,autor);
          std::cout<<"inrgese titulo"<<std::endl;
          getline(cin,titulo);
          ptrUsuario->devolverMaterial(biblioteca,autor,titulo);
        }
        
        if(opcion2==5){
          cout<<"saliendo"<<endl;
          break;
        }     
      }
    }

    if (opcion==4)
    {
      cout<<"saliendo....";
      break;
    }
        
  }
  return 0;
}