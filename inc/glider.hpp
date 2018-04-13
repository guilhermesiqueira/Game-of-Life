#ifndef GLIDER_HPP
#define GLIDER_HPP

#include "campo.hpp"
#include "coordenadas.hpp"

class Glider : public Campo{
private:

public:
	Glider();
	~Glider();	
	void glider (Coordenadas coordenadas);
};

#endif