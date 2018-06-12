#include "HighScore.h"

HighScore::HighScore(int _length)
{
	lenght = _length;
	scoreList = new list<Score*>();
}


HighScore::~HighScore()
{
	delete scoreList;
}

bool ComparateScores(const Score* _score1, const Score* _score2)
{
	return _score1->GetScore() > _score2->GetScore();
}

void HighScore::NewScore(int _score, string _player)
{

	Score* add = new Score(_score, _player);
	scoreList->push_back(add);
	scoreList->sort(ComparateScores);

	if (scoreList->size() > lenght)
	{
		scoreList->pop_back();
	}
}

void HighScore::ShowScores()
{
	cout << "----------------------------HIGHSCORES----------------------------" << endl;

	list<Score*>::iterator iterator;
	int position = 1;
	for (iterator = scoreList->begin(); iterator != scoreList->end(); iterator++)
	{
		Score* scoreAux = *iterator;
		cout << "Player: " << scoreAux->GetPlayer().c_str() << " " << "Score: " << scoreAux->GetScore() << endl;
		position++;
	}	
}


