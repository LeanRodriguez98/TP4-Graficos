#ifndef SCORE_H
#define SCORE_H
#include <iostream>
using namespace std;

class Score
{
public:
	Score(int _score, string _name);
	~Score();
	int GetScore() const;
	string GetPlayer() const;
	void SetScore(int newScore);
	void SetPlayer(string newPlayer);
private:
	int score;
	string player;
};
#endif SCORE_H
