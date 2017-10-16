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
	string _pigLatin;

	void ToLowercase();
	void ReverseWord();
	void Rot13();
	void NumberInAlphabet();

	void PigLatin();
	bool IsVowel(char letter);
	bool IsConsonant(char letter);
	bool IsDigit(char letter);
	bool IsPunctuation(char letter);



public:
	Word();

	void SetWord(string word);
	void SetWord();
	string GetWord();
	string GetLowerCaseWord();
	string GetReverseWord();
	string GetRot13Word();
	int GetNumberInAlphabet();
	string GetPigLatin();

	void TestCode();

	~Word();

	
};

