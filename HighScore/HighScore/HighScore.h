#pragma once
#include "Score.h"
#include <algorithm>
#include <list>
#include <iostream>
using namespace std;
class HighScore
{
public:
	HighScore(int lenght);
	~HighScore();
	void NewScore(int _score, string _player);
	void ShowScores();
private:
	list<Score*>* scoreList;
	int lenght;
};

