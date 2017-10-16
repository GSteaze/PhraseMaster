#pragma once
#include <string>

using namespace std;

class Word
{
private:

	string _word;
	string _lowerCaseWord;
	string _reverseWord;
	string _rot13Word;
	int _numberInAlphabet;

	void ToLowercase();

	void ReverseWord();

	void Rot13();

	void NumberInAlphabet();

public:
	Word();

	void SetWord(string word);
	void SetWord();
	string GetWord();
	string GetLowerCaseWord();
	string GetReverseWord();
	string GetRot13Word();
	int GetNumberInAlphabet();

	void TestCode();

	~Word();

	
};

