#include "gosper.hpp"
#include <iostream>

Gosper::Gosper(){}

void Gosper::gosper(){
	//block
	campo[16][12] = true;
	campo[17][12] = true;
	campo[16][13] = true;
	campo[17][13] = true;
	//nave
	campo[14][24] = true;
	campo[14][25] = true;
	campo[15][23] = true;
	campo[15][27] = true;
	campo[16][22] = true;
	campo[17][22] = true;
	campo[18][22] = true;
	campo[19][23] = true;
	campo[20][24] = true;
	campo[20][25] = true;
	campo[19][27] = true;
	campo[18][28] = true;
	campo[17][26] = true;
	campo[17][28] = true;
	campo[17][29] = true;
	campo[16][28] = true;
	campo[15][27] = true;

	campo[14][32] = true;
	campo[15][32] = true;
	campo[16][32] = true;
	campo[14][33] = true;
	campo[15][33] = true;
	campo[16][33] = true;
	campo[13][34] = true;
	campo[17][34] = true;
	campo[12][36] = true;
	campo[13][36] = true;
	campo[17][36] = true;
	campo[18][36] = true;
	//o outro block
	campo[14][46] = true;
	campo[15][46] = true;
	campo[14][47] = true;
	campo[15][47] = true;
}

Gosper::~Gosper(){}