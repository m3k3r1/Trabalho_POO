#ifndef _CASTLE_H_
#define _CASTLE_H_

#include "Building.hpp"
#include <vector>
#include <iostream>
#include "Unit.hpp"


class Castle : public Building {
private:
	std::vector <Unit *> unitsInCatle;
public:
	Castle(char c_id, int a, int b) :Building(c_id, a, b) {};
	std::string print()  override;
	void makeUnit(int n_units = 0) override;
	//void holdUnitsIn(std::vector<std::vector< Pos_xy*>> &gameMap);
	void releaseUnitsIn(std::vector<std::vector< Pos_xy*>> &gameMap);
};

#endif // !_CASTLE_H_




