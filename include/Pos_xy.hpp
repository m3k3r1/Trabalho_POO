#ifndef _POS_XY_H
#define _POS_XY_H

#include <iostream>
#include <vector>

class Pos_xy {
protected:
	int x, y;
	char colonyId;
public:
	Pos_xy(char c_id, int a, int b) :x(a), y(b), colonyId(c_id) {};
	int getX() const { return x; };
	int getY() const { return y; };
	char getColonyId() const { return colonyId; };
	virtual std::string print() = 0;
	virtual void makeUnit(int n_units = 0) = 0;
	virtual void move(std::vector<std::vector< Pos_xy*>> &gameMap, std::string action) = 0;
	virtual void releaseUnitsIn(std::vector<std::vector< Pos_xy*>> &gameMap) = 0;
};

#endif //! _POS_XY_H
