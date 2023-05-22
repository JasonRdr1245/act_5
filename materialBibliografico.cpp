#include "materialBibliografico.hpp"
MaterialBibliografico::MaterialBibliografico(){}
MaterialBibliografico::MaterialBibliografico(std::string _titulo,std::string _autor,std::string _editorial,std::string _fechaPublicacion):
    titulo(_titulo),autor(_autor),editorial(_editorial),fechaPublicacion(_fechaPublicacion){

}
MaterialBibliografico::~MaterialBibliografico(){}