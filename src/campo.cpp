#include <iostream>
using namespace std;
#include "campo.hpp"

Campo::Campo(){
	for (int i = 0; i < ALTURA; i++){
		for (int j = 0; j < COMPRIMENTO;j++){
			campo[i][j] = false;
		}
	}
}

void Campo::prox(){
	bool campoTemp[ALTURA][COMPRIMENTO];
	for (int i = 0; i < ALTURA; ++i){
		for (int j = 0; j < COMPRIMENTO; ++j)
		{
			campoTemp[i][j] = false;
		}
	}
	for (int i = 0; i < (ALTURA-1); ++i){
		for (int j = 0; j < COMPRIMENTO; ++j){
			int contador = 0;
			if (campo[i-1][j-1]){
				contador++;
			}
			if (campo[i-1][j]){
				contador++;
			}
			if (campo[i-1][j+1]){
				contador++;
			}
			if (campo[i][j-1]){
				contador++;
			}
			if (campo[i][j+1]){
				contador++;
			}
			if (campo[i+1][j-1]){
				contador++;
			}
			if (campo[i+1][j]){
				contador++;
			}
			if (campo[i+1][j+1]){
				contador++;
			}

			if (contador < 2 || contador > 3){
				campoTemp[i][j] = false;
			}
			else if (contador == 2 && campo[i][j]){
				campoTemp[i][j] = true;
			}
			else if (contador == 3){
				campoTemp[i][j] = true;
			}
		}
	}

	for (int i = 0; i < ALTURA; ++i){
		for (int j = 0; j < COMPRIMENTO; ++j){
			campo[i][j] = campoTemp[i][j];
		}
	}
}

void Campo::printaEstrutura(){
	for (int i = 0; i < ALTURA; ++i){
		for (int j = 0; j < COMPRIMENTO; ++j)
		{
			if (campo[i][j] == true){
				cout << 'O';
			}
			else{
				cout <<'-';
			}
		}
		cout <<endl;
	}
}

void Campo::limpaCampo(){
	for (int i = 0; i < ALTURA; ++i){
		for (int j = 0; j < COMPRIMENTO; ++j){
			campo[i][j] = false;
			}
		}
	} 