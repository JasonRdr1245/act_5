#pragma once


class BibliotecaService;
class MaterialBibliografico
{
private:
    /* data */
protected:
    std::string titulo;
    std::string autor;
    std::string editorial;
    std::string fechaPublicacion;
    bool estaDisponible;
public:
    friend bool BibliotecaService::isBook(MaterialBibliografico&);
    MaterialBibliografico();
    MaterialBibliografico(std::string _titulo,std::string _autor,std::string _editorial,std::string _fechaPublicacion);
    virtual void imprimir() const=0;
    ~MaterialBibliografico();
};
#include "bibliotecaService.hpp"

