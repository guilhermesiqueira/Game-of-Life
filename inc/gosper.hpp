#ifndef GOSPER_HPP
#define GOSPER_HPP
#include "campo.hpp"
//#include "coordenadas.hpp" //já tem uma herança no campo.hpp 
#include <iostream>

class Gosper : public Campo{
public:
	Gosper();	
	~Gosper();
	void gosper();
};
#endif