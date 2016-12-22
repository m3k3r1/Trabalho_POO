#include "Unit.hpp"

std::string Unit::print(){
	return " U ";
}

void Unit::move(std::vector<std::vector< Pos_xy*>> &gameMap, std::string action){
	if (action == "up") {
		gameMap[y][x] = nullptr;
		gameMap[++y][x] = this;
	}
	if (action == "down"){
		gameMap[y][x] = nullptr;
		gameMap[--y][x] = this;
	}
	if (action == "right") {
		gameMap[y][x] = nullptr;
		gameMap[y][++x] = this;
	}
	if (action == "left") {
		gameMap[y][x] = nullptr;
		gameMap[y][--x] = this;
	}
}
