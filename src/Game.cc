#include "Game.hpp"
#include "Castle.hpp"
#include <cmath>
#include <time.h>

Game::Game(int r, int c)
	:mapRow(r), mapCol(c), screen(mapRow, mapCol) {

}

Game::~Game() {
}

void Game::initMap() {
	gameMap.resize(mapCol);
	for (auto& a : gameMap)
		a.resize(mapRow);
}

void Game::setup(int row, int col, int nCoins, int nPlayers, char player) {
	mapRow = row;
	mapCol = col;

	initMap();

	coins = nCoins;
	n_players = nPlayers;
	charPlayer = player;
	char char_tmp = player;

	int rand_x, rand_y;
	
	srand(time(0));

	for (size_t i = 0; i < n_players; i++){
		do{
			rand_x = rand() % mapRow - 1;
			rand_y = rand() % mapCol - 1; 
		} while(rand_x < 0 && rand_y < 0);

		castleX.push_back(rand_x);
		castleY.push_back(rand_y);

		gameMap[rand_y][rand_x] = new Castle(char_tmp, rand_x, rand_y);

		char_tmp++;
	}

	std::cout << "Created player " << charPlayer << " castle in " << castleX[0] << " - " << castleY[0] << std::endl;

}

void Game::renderMap() {
	screen.render(gameMap);
}

void Game::addToMap(Pos_xy* obj, int r, int c) {
	gameMap[c][r] = obj;
}

int Game::getCastleX(char p) const{
	int player = p - charPlayer;
	return castleX[player];
}

int Game::getCastleY(char p) const{
	int player = p - charPlayer;
	return castleY[player];
}

void Game::makeUnits(char c_id, int n_units) {
	int player = c_id - charPlayer;

	gameMap[castleY[player]][castleX[player]]->makeUnit(n_units);
}

void Game::moveUnits(char c_id) {
	for (size_t col = 0; col < mapCol; col++){
		for (size_t row = 0; row < mapRow; row++){
			if (gameMap[col][row] != nullptr && gameMap[col][row]->getColonyId() == c_id){
				gameMap[col][row]->move(gameMap, "down");
			}
		}
	}
	int player = c_id - charPlayer;
	gameMap[castleY[player]][castleX[player]]->releaseUnitsIn(gameMap);
}