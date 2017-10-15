#pragma once
#include <string>

using namespace std;

class Word
{
private:

	string word;
	string lowerCaseWord;
	string reverseWord;
	string rot13Word;
	int numberInAlphabet;

public:
	Word();

	~Word();

	void ToLowercase(string word);
	
	void ReverseWord(string word);

	void Rot13(string word);

	void NumberInAlphabet(string word);
};

