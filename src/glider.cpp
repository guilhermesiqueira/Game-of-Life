#include "glider.hpp"

using namespace std;

Glider::Glider(){}

void Glider::glider(Coordenadas coordenadas){
	int x = coordenadas.getX();
	int y = coordenadas.getY();

	campo[y+2][x+8] = true;
	campo[y+3][x+8] = true;
	campo[y+4][x+8] = true;
	campo[y+3][x+6] = true;
	campo[y+4][x+7] = true;
}

Glider::~Glider(){}