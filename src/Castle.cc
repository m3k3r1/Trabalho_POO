#include "Castle.hpp"
#include "Unit.hpp"

std::string Castle::print() {
	return " C ";
}
void Castle::makeUnit(int n_units){
	for (size_t i = 0; i < n_units; i++)
		unitsInCatle.push_back( new Unit(colonyId, x, y));
	
}

void Castle::releaseUnitsIn(std::vector<std::vector<Pos_xy*>>& gameMap){
	for (auto a : unitsInCatle) {
		gameMap[y][x++] = a;
	}


}
