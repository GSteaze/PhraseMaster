#pragma once
#include <string>
#include "Word.h"

using namespace std;

class Phrase
{

private:

	string _userPhrase;

	string _wordsInPhrase[1000];

	int _numberOfWords;

	Word *iWords[];

	

public:
	Phrase();
	~Phrase();

	void ParseUserInput();
	string GetPhrase();
	void SetUserPhrase();
	void CreateWords();
	string ReorderPhrase();
	string ReversePhrase();
	string Rot13Phrase();
};

