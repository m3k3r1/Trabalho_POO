#ifndef _BUILDING_H_
#define _BUILDING_H_

#include "Pos_xy.hpp"

class Building : public Pos_xy {
protected:
	int hp;
public:
	Building(char c_id, int a, int b) : Pos_xy(c_id, a, b) {};
	virtual std::string print() = 0;
	virtual void makeUnit(int n_units = 0) = 0;
	virtual void move(std::vector<std::vector< Pos_xy*>> &gameMap, std::string action) override {};
	virtual void releaseUnitsIn(std::vector<std::vector< Pos_xy*>> &gameMap) override {};
};

#endif
