#include <iostream>
#include <string>
#include <vector>

#include "libro.hpp"
#include "biblioteca.hpp"
#include "bibliotecaService.hpp"
#include "biblioteca.cpp"
#include "libro.cpp"
#include "bibliotecaService.cpp"

using namespace std;



int main() {
  Biblioteca biblioteca;
  BibliotecaService amigoBiblioteca;

  while (true) {
    cout << "¿Que desea hacer?"<<endl<<"(1) Mostrar libros"<<endl<<"(2) Solicitar libro"<<endl<<"(3) Devolver libro"<<endl<<"(4) Mostrar libros prestados"<<endl<<"(5) Salir" << endl;
    int eleccion;
    cin >> eleccion;

    if (eleccion == 1) {
      biblioteca.mostrarLibros();
    } else if (eleccion == 2) {
      string autor, titulo;
      cout << "Introduzca el autor y el título del libro que desea pedir prestado: ";
      cin >> autor >> titulo;
      biblioteca.solicitarLibro(autor, titulo);
    } else if (eleccion == 3) {
      string autor, titulo;
      cout << "Introduzca el autor y el título del libro que desea devolver: ";
      cin >> autor >> titulo;
      biblioteca.devolverLibro(autor, titulo);
    } else if (eleccion == 4) {
      amigoBiblioteca.mostrarLibrosPrestados(biblioteca);
    } else if (eleccion == 5) {
      break;
    }
  }

  return 0;

}