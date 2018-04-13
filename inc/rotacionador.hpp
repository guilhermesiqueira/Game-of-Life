#ifndef ROTACIONADOR_HPP
#define ROTACIONADOR_HPP
#include "campo.hpp"
#include "coordenadas.hpp"
#include <iostream>

class Rotacionador : public Campo {
private:

public:
	Rotacionador();
	~Rotacionador();
	void rotacionador (Coordenadas coordenadas);
};
#endif