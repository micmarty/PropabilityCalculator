#pragma once
#include<vector>
using namespace std;

#define N 3		//board length
#define END_OF_BOARD 0//value that means - 'if you are here, you won'

class GameState
{
private:
	int g;	//which player is rolling a dice in this turn
	int a;	//1st player position
	int b;	//2nd player position
	double c;	//intercept
	vector<double> equation;//holds factors(PL wsp�czynniki)
public:
	static vector<int> gameBoard;//na zapas zeby nie wyjsc za zakres
	static vector<GameState*> queue;

	GameState(int g, int a, int b);
	~GameState();

	void fillEquation();
	bool elementFound(GameState* neededElement);
	bool operator==(const GameState &r);
};


