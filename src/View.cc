#include "View.hpp"
#include "Pos_xy.hpp"
#include <string>


View::View(int r, int c, int vr, int vc)
	:mapRow(r), mapCol(c), mapVisibleRow(vr), mapVisibleCol(vc) {

}
void View::render(std::vector<std::vector< Pos_xy*>> gameMap, int col_, int row_) {
	for (size_t col = col_; col < 40; col++) {
		for (size_t row = row_; row < 20; row++) {
			if (gameMap[col][row] == nullptr) {
				std::cout << " # ";
				continue;
			}
			else {
				std::cout << gameMap[col][row]->print();
			}
		}
		std::cout << std::endl;
	}
}
