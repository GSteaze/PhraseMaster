#include "Phrase.h"
#include "Word.h"
#include <string>
#include <iostream>

using namespace std;

const int kEndOfLine = 1024;

Phrase::Phrase()
{
	_userPhrase = "";
	SetUserPhrase();
	_numberOfWords = 0;
	Word *iWords = nullptr;
	iWords = new Word[1000];

	string _wordsInPhrase[1000];
}


Phrase::~Phrase()
{
	delete[] iWords;
}

string Phrase::GetPhrase() {
	return _userPhrase;
}

void Phrase::ParseUserInput() {
	string tempPhrase = _userPhrase;
	int position = 0;
	string word = "";
	int wordCounter = 0;
	while ((position = tempPhrase.find(' ')) != string::npos) {
		word = tempPhrase.substr(0, position);
		_wordsInPhrase[wordCounter] = word;
		tempPhrase.erase(0, position);
	}
	cout << _wordsInPhrase[1] << endl;
}


void Phrase::CreateWords() {
	string tempWord = _userPhrase;
	int wordCounter = 0;
	string wordFromPhrase = "";
	int locator = 0;
	int lastLocator = 0;
	int finalSpace = tempWord.find_last_of(' ');
	int size = 0;
	while (locator != finalSpace) {
		locator = tempWord.find_first_of(' ', lastLocator);
		size = locator - lastLocator;
		wordFromPhrase = tempWord.substr(lastLocator, size);

		iWords[wordCounter] = new Word();
		iWords[wordCounter]->SetWord(wordFromPhrase);
		_wordsInPhrase[wordCounter] = wordFromPhrase;
		wordCounter++;
		lastLocator = locator;
	}
	_numberOfWords = wordCounter;

	cout << _wordsInPhrase[2] << endl;
}

void Phrase::SetUserPhrase()
{
	string userInput = "";
	cout << "Enter the phrase to be manipulated." << endl
		<< "Phrase : ";
	getline(cin, userInput);

	bool isValid = false;
	while (!isValid) {
		if (userInput.empty()) {
			cout << "Phrase cannot be empty." << endl
				<< "Please try again : ";
			cin.clear();
			getline(cin,userInput);
		}
		else {
			isValid = true;
		}
	}
	_userPhrase = userInput;
}

//string Phrase::ReorderPhrase() {
//	string reorderedPhrase = "";
//	int arraySize = numberOfWords;
//	for (int index = 0; index < numberOfWords; index++) {
//
//	}
//}
//
//string Phrase::ReversePhrase() {
//	string reversedPhrase = "";
//	for (int index = _numberOfWords; index >= 0; index--) {
//		reversedPhrase.append(iWords[index]->GetWord);
//		reversedPhrase.append(" ");
//	}
//	return reversedPhrase;
//}
//
//string Phrase::Rot13Phrase() {
//	string rot13Phrase = "";
//	string currentWord = "";
//	for (int index = 0; index < numberOfWords; index++) {
//		currentWord = iWords[index]->GetRot13Word;
//		rot13Phrase.append(iWords[index]->GetRot13Word);
//		rot13Phrase.append(" ");
//	}
//	return rot13Phrase;
//}


