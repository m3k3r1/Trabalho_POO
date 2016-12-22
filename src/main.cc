#include "Game.hpp"
#include "Castle.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	Game game(40, 20);
	
	game.setup(20, 40, 500, 2, 'A');
	
	game.makeUnits('A', 1);
	game.moveUnits('A');

	game.renderMap();

	return 0;
}
