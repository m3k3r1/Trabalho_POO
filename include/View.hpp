#ifndef _VIEW_H_
#define _VIEW_H_

#include <iostream>
#include<vector>

class Pos_xy;

class View {
private:
	int mapRow, mapCol;
	int mapVisibleRow, mapVisibleCol;
public:
	View(int r, int c, int vr = 16, int vc = 8);
	void render(std::vector<std::vector< Pos_xy*>> gameMap, int col_ = 0, int row_ = 0);
};

#endif
