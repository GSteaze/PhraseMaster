#pragma once
#include <string>
#include "Word.h"

using namespace std;

class Phrase
{

private:

	string _userPhrase;

	int _numberOfWords;

	Word *iWords[];

	

public:
	Phrase();
	~Phrase();

	string GetPhrase();
	void SetUserPhrase();
	void CreateWords();
	string ReorderPhrase();
	string ReversePhrase();
	string Rot13Phrase();
};

