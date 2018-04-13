#include "coordenadas.hpp"
#include "block.hpp"
#include "campo.hpp"
#include "glider.hpp"
#include "rotacionador.hpp"
#include "gosper.hpp"
#include <iostream>
#include <string>
using namespace std;


Coordenadas getCoord();
Coordenadas getCoord(){ // Uso do polimorfismo
	char eixoX,eixoY;
	cout << "Digite o caractere 'x' para plotar a parte das abscissas da estrutura:  ";
	cin >> eixoX;

	while (eixoX != 'x'){
		cout << "Por favor, digite o caractere 'x'!";
		cin >> eixoX;
	}
	cout << "Digite o caractere 'y' para plotar a parte das ordenadas da estrutura:  ";
	cin >> eixoY;	
	while (eixoY != 'y'){
		cout << "Por favor, digite o caractere 'y'!";
		cin >> eixoY;
	}
	Coordenadas coordenadas(eixoX, eixoY);
	return coordenadas;
	}

bool rodaJogo();
bool rodaJogo(){
	cout << endl << endl;
	cout << "Pressione qualquer LETRA/NÚMERO/OPERADOR/ACENTO e tecle ENTER em seguida para gerar a próxima geração. Pressione P para sair." << endl;
	char proximaGeracao;
	cin >> proximaGeracao;
	while(proximaGeracao != 'p'){
		return true;
	}
	return false;
}

int main(int argc, char const *argv[]){
	Campo campo; //Instanciando objetos
	Rotacionador rotacionador; 
	Glider glider;
	Gosper gosper;
	Block block;

	int escolha;
	cout << "------------------------- Bem vindo ao Jogo da Vida - Conway -------------------------" << endl << endl;
	cout << "O jogo resume-se a quatro regras para a sobrevivência das celulas e geração de novas gerações: " << endl;
	cout << "1.) Qualquer célula viva com menos de dois vizinhos vivos morre de solidão." << endl;
	cout << "2.) Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação." << endl;
	cout << "3.) Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva." << endl;
	cout << "4.) Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração." << endl << endl;
	cout << "O Gosper Glider Gun consiste numa estrutura que gera gliders a partir da interação das estruturas presentes no campo." << endl;
	cout << "À medida que você avança as gerações e o glider chega às extremididades, ele fica grudado nela, como se fosse uma parede. O glider se torna um block" << endl << endl;

	do{
		cout << "Digite 1 para ver um block (estático)" << endl;
		cout << "Digite 2 para ver um rotacionador" << endl;
		cout << "Digite 3 para ver um glider" << endl;
		cout << "Digite 4 para um Gosper Glider Gun" << endl;
		cout << "Digite qualquer outro caractere para sair" << endl;
		cout << "Opção escolhida: ";
		cin >> escolha;
		cout << endl;

		if (escolha == 1){
			block.block();
			block.printaEstrutura();			
			block.limpaCampo();
			cout << endl;
		}
		
		if (escolha == 2){
			Coordenadas coordenadaInicio = getCoord();
			rotacionador.rotacionador(coordenadaInicio);
			rotacionador.printaEstrutura();
			while(rodaJogo()){
				rotacionador.prox();
				rotacionador.printaEstrutura();
			}
			rotacionador.limpaCampo();
		}
		if (escolha == 3){
			Coordenadas coordenadaInicio = getCoord();
			glider.glider(coordenadaInicio);
			glider.printaEstrutura();
			while(rodaJogo()){
				glider.prox();
				glider.printaEstrutura();
			}
			glider.limpaCampo();
		}
		if (escolha == 4){
			gosper.gosper();
			gosper.printaEstrutura();
			while(rodaJogo()){
				gosper.prox();
				gosper.printaEstrutura();
			}
			gosper.limpaCampo();
		}
	} while (escolha == 1 || escolha == 2 || escolha == 3 || escolha == 4);
	cout << "Obrigado por jogar!" << endl << endl;
	return 0;
}