#include "block.hpp"
#include <iostream>


Block::Block(){}

void Block::block(){
	//block
	campo[17][36] = true;
	campo[18][36] = true;
	campo[17][37] = true;
	campo[18][37] = true;
}
Block::~Block(){}