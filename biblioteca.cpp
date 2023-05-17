#include "biblioteca.hpp"
Biblioteca::Biblioteca(){
  this->libros={
      {Libro("Miguel de Cervantes","Don Quijote de la Mancha")},
      {Libro("J.R.R. Tolkien","El Señor de los Anillos")},
      {Libro("J.K. Rowling","Harry Potter y la Piedra Filosofal")},
      {Libro("Suzanne Collins","Los Juegos del Hambre")},
      {Libro("Harper Lee","Matar a un Ruiseñor")},
    };
}

void Biblioteca::mostrarLibros(){
    for (auto libro:this->libros) {
      std::cout<< libro<< std::endl;
    }
}

void Biblioteca::solicitarLibro(std::string autor,std:: string titulo){
    for (int i = 0; i < this->libros.size(); i++) {
      if (this->libros[i].autor == autor && libros[i].titulo == titulo) {
        if (libros[i].estaDisponible) {
          libros[i].estaDisponible = false;
          std::cout << "Libro prestado." << std::endl;
        } else {
          std::cout << "Libro no disponible." << std::endl;
        }
        return;
      }
    }
}

void Biblioteca::devolverLibro(std::string autor,std:: string titulo){
    for (int i = 0; i < libros.size(); i++) {
      if (libros[i].autor == autor && libros[i].titulo == titulo) {
        libros[i].estaDisponible = true;
        std::cout << "Libro devuelto." << std::endl;
        return;
      }
    }
}