#ifndef _GAME_H_
#define _GAME_H_

#include <iostream>
#include <vector>
#include "Pos_xy.hpp"
#include "View.hpp"

class Game {
private:
	int n_players, coins;
	char charPlayer;
	int mapRow, mapCol;
	std::vector <int> castleX, castleY;
	bool gameStart, gameEnd;
	std::vector<std::vector<Pos_xy*>> gameMap;
	View screen;

public:
	Game(int r, int c);
	virtual ~Game();
	void initMap();
	void setup(int row, int col, int nCoins, int nPlayers, char player);
	void renderMap();
	void addToMap(Pos_xy* obj, int r, int c);
	int getCastleX(char p) const;
	int getCastleY(char p) const;
	void makeUnits(char c_id, int n_units);
	void moveUnits(char c_id);
};

#endif  // !_GAME_H_
