#include "coordenadas.hpp"

Coordenadas::Coordenadas(){} //construtor por padrão.
Coordenadas::Coordenadas(char x, char y){}

void Coordenadas::setX(char x){
	x = this->x;
}
char Coordenadas::getX(){
	return x;
}

void Coordenadas::setY(char y){
	y = this->y;
}
char Coordenadas::getY(){
	return y;
}
