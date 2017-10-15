#include "Word.h"

using namespace std;

Word::Word()
{
	word = "";
	lowerCaseWord = "";
	reverseWord = "";
	rot13Word = "";
	numberInAlphabet = 0;
}


Word::~Word()
{
}

void Word::ToLowercase(string word) {
	for (int index = 0; index < word.size(); index++) {
	if (word[index] >= 'A' && word[index] <= 'Z') {
		word[index] = word[index] + 32;
	}
	}
	this->lowerCaseWord = word;
}

void Word::ReverseWord(string word) {
	string reverseWord = word;
	int reverseWordIndex = 0;
	for (int index = word.size() - 1; index < word.size(); index--) {
		reverseWord[reverseWordIndex] = word[index];
	}
	this->reverseWord = reverseWord;
}

void Word::Rot13(string word) {
	for (int index = 0; index < word.size(); index++) {
		if (word[index] >= 'a' && word[index] <= 'z') {
			word[index] = word[index] + 13;
			if (word[index] > 'z') {
				word[index] = word[index] - 26;
			}
		}
		else if (word[index] >= 'A' && word[index] <= 'Z') {
			word[index] = word[index] + 13;
			if (word[index] > 'Z') {
				word[index] = word[index] - 26;
			}
		}
		else {
			word[index] = '*';
		}
	}
	this->rot13Word = word;
}

void Word::NumberInAlphabet(string word) {
	char firstLetter = word[0];
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
	this->numberInAlphabet = numberInAlphabet;
}


