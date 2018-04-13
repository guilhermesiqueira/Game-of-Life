#include "rotacionador.hpp"

using namespace std;

Rotacionador::Rotacionador(){}

	void Rotacionador::rotacionador(Coordenadas coordenadas){
	int x = coordenadas.getX();
	int y = coordenadas.getY();

	campo[y+15][x+37] = true;
	campo[y+16][x+37] = true;
	campo[y+17][x+37] = true;
}

Rotacionador::~Rotacionador(){} //destrói o objeto.