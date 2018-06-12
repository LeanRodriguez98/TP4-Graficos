#include "Score.h"

Score::Score(int _score, string _player)
{

	player = _player;
	score = _score;
}

Score::~Score(){}

int Score::GetScore() const 
{
	return score;
}

string Score::GetPlayer() const 
{
	return player;
}

void Score::SetScore(int newScore) 
{
	score = newScore;
}

void Score::SetPlayer(string newPlayer)
{
	player = newPlayer;
}
