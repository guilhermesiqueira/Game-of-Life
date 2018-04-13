#ifndef COORDENADAS_HPP
#define COORDENADAS_HPP

class Coordenadas{
private:
	char x, y;
public:
	Coordenadas(); //Construtor por padrão
	Coordenadas(char a,char b); //Construtor com polimorfismo

	//acessores
	char getX();
	void setX(char a);
	char getY();
	void setY(char a);
};
#endif