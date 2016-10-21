// Copyright 2016 Gerardo Teruel

#include <iostream>
#include <string>
#include "model/Autor.hpp"
#include "model/Hillary.hpp"
#include "model/PenaNieto.hpp"
#include "model/Trump.hpp"
#include "article/Catalogue.hpp"
#include "outlet/CnnNoticias.hpp"
#include "outlet/MvsNoticias.hpp"
#include "outlet/RadioFormula.hpp"
#include "outlet/Televisa.hpp"
#include "outlet/TvAzteca.hpp"

void publish(Autor* autor) {
  std::cout << "Inserte el titulo del articulo (sin espacios)" << std::endl;
  std::string title;
  std::cin >> title;
  autor->publish(title);
}

void publishHillary() {
  publish(Hillary::getInstance());
}

void publishPenaNieto() {
  publish(PenaNieto::getInstance());
}

void publishTrump() {
  publish(Trump::getInstance());
}

void initializeOutlets() {
  CnnNoticias::getInstance();
  MvsNoticias::getInstance();
  RadioFormula::getInstance();
  Televisa::getInstance();
  TvAzteca::getInstance();
}

int main(int argc, char const *argv[]) {
  int option = 0;

  initializeOutlets();

  std::cout << "Bienvenido, inserta la opcion a ejecutar" << std::endl;

  while (option >= 0) {
    std::cout << "************* MENU **************" << std::endl;
    std::cout << "1. Publicar articulo como Hillary" << std::endl;
    std::cout << "2. Publicar articulo como Pena Nieto" << std::endl;
    std::cout << "3. Publicar articulo como Trump" << std::endl;
    std::cout << "4. Consultar catalogo de articulos" << std::endl;
    std::cout << "Cualquier otro numero para salir" << std::endl;

    std::cin >> option;
    if (option == 1) {
      publishHillary();
    } else if (option == 2) {
      publishPenaNieto();
    } else if (option == 3) {
      publishTrump();
    } else if (option == 4) {
      std::cout << *Catalogue::getInstance() << std::endl;
    } else {
      option = -1;
    }
  }

  std::cout << "Adios" << std::endl;

  return 0;
}
