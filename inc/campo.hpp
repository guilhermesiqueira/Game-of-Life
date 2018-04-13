#ifndef CAMPO_HPP
#define CAMPO_HPP
#include <iostream>
#include <string>
using namespace std;
#include "coordenadas.hpp" 

const int ALTURA = 40;
const int COMPRIMENTO = 80;

class Campo{
protected:
	bool campo [ALTURA][COMPRIMENTO];
public:
  Campo();
  void prox();
  void printaEstrutura();
  void limpaCampo();
};
#endif
