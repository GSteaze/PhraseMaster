#include "Word.h"
#include <iostream>

using namespace std;

Word::Word()
{
	_word = "";
	_lowerCaseWord = "";
	_reverseWord = "";
	_rot13Word = "";
	_numberInAlphabet = 0;
}

Word::~Word()
{
}

void Word::SetWord(string word) {
	_word = word;
}

void Word::SetWord() {
	string userInput = "";
	cout << "Enter the word." << endl
		<< "Word : ";
	cin >> userInput;

	bool isValid = false;
	while (!isValid) {
		if (userInput.empty()) {
			cout << "Word cannot be empty." << endl
				<< "Please try again : ";
			cin >> userInput;
		}
		else {
			isValid = true;
		}
	}
	_word = userInput;
}

string Word::GetWord() {
	return _word;
}

string Word::GetLowerCaseWord() {
	ToLowercase();
	return _lowerCaseWord;
}

string Word::GetReverseWord() {
	ReverseWord();
	return _reverseWord;
}

string Word::GetRot13Word() {
	Rot13();
	return _rot13Word;
}

int Word::GetNumberInAlphabet() {
	NumberInAlphabet();
	return _numberInAlphabet;
}

void Word::ToLowercase() {
	string lowerCaseWord = _word;
	for (int index = 0; index < lowerCaseWord.size(); index++) {
	if (lowerCaseWord[index] >= 'A' && lowerCaseWord[index] <= 'Z') {
		lowerCaseWord[index] = lowerCaseWord[index] + 32;
	}
	}
	_lowerCaseWord = lowerCaseWord;
}

void Word::ReverseWord() {
	string reverseWord = _word;
	int reverseWordIndex = 0;
	for (int index = reverseWord.size() - 1; index < reverseWord.size(); index--) {
		reverseWord[reverseWordIndex] = _word[index];
		reverseWordIndex++;
	}
	_reverseWord = reverseWord;
}

void Word::Rot13() {
	string rot13Word = _word;
	for (int index = 0; index < _word.size(); index++) {
		if (rot13Word[index] >= 'a' && rot13Word[index] <= 'z') {
			rot13Word[index] = rot13Word[index] + 13;
			if (rot13Word[index] > 'z') {
				rot13Word[index] = rot13Word[index] - 26;
			}
		}
		else if (rot13Word[index] >= 'A' && rot13Word[index] <= 'Z') {
			rot13Word[index] = rot13Word[index] + 13;
			if (rot13Word[index] > 'Z') {
				rot13Word[index] = rot13Word[index] - 26;
			}
		}
		else {
			rot13Word[index] = '*';
		}
	}
	_rot13Word = rot13Word;
}

void Word::NumberInAlphabet() {
	string tempWord = GetLowerCaseWord();
	char firstLetter = tempWord[0];
	int numberInAlphabet = 0;
	switch (firstLetter) {
	case 'a':  numberInAlphabet = 1;
		break;
	case 'b':  numberInAlphabet = 2;
		break;
	case 'c':  numberInAlphabet = 3;
		break;
	case 'd':  numberInAlphabet = 4;
		break;
	case 'e':  numberInAlphabet = 5;
		break;
	case 'f':  numberInAlphabet = 6;
		break;
	case 'g':  numberInAlphabet = 7;
		break;
	case 'h':  numberInAlphabet = 8;
		break;
	case 'i':  numberInAlphabet = 9;
		break;
	case 'j':  numberInAlphabet = 10;
		break;
	case 'k':  numberInAlphabet = 11;
		break;
	case 'l':  numberInAlphabet = 12;
		break;
	case 'm':  numberInAlphabet = 13;
		break;
	case 'n':  numberInAlphabet = 14;
		break;
	case 'o':  numberInAlphabet = 15;
		break;
	case 'p':  numberInAlphabet = 16;
		break;
	case 'q':  numberInAlphabet = 17;
		break;
	case 'r':  numberInAlphabet = 18;
		break;
	case 's':  numberInAlphabet = 19;
		break;
	case 't':  numberInAlphabet = 20;
		break;
	case 'u':  numberInAlphabet = 21;
		break;
	case 'v':  numberInAlphabet = 22;
		break;
	case 'w':  numberInAlphabet = 23;
		break;
	case 'x':  numberInAlphabet = 24;
		break;
	case 'y':  numberInAlphabet = 25;
		break;
	case 'z':  numberInAlphabet = 26;
		break;
	}
	_numberInAlphabet = numberInAlphabet;
}


