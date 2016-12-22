#ifndef _UNIT_H_
#define _UNIT_H_

#include "Pos_xy.hpp"

class Unit : public Pos_xy {
protected:
public:
	Unit(char c_id, int a, int b) :Pos_xy(c_id, a, b) {};
	std::string print()  override;
	void makeUnit(int n_units = 0) override {};
	void move(std::vector<std::vector< Pos_xy*>> &gameMap, std::string action);
	virtual void releaseUnitsIn(std::vector<std::vector< Pos_xy*>> &gameMap) override {};
};

#endif // !_UNIT_H_
