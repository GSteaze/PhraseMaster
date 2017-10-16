#include "Phrase.h"
#include "Word.h"
#include <string>
#include <iostream>

using namespace std;

const int kEndOfLine = 1024;

Phrase::Phrase()
{
	_userPhrase = "";
	_numberOfWords = 0;
	/*Word *iWords = nullptr;
	iWords = new Word[1000];*/

	string _wordsInPhrase[1000];
}


Phrase::~Phrase()
{
	//delete[] iWords;
}

string Phrase::GetPhrase() {
	return _userPhrase;
}

/*void Phrase::ParseUserInput() {
	string tempPhrase = _userPhrase;

	cout << "TempPhrase : " << tempPhrase << endl;

	size_t pos = 0;
	string word = "";
	int wordCounter = 0;
	while (pos = tempPhrase.find(' ') != string::npos) {
		word = tempPhrase.substr(0, pos);

		cout << "pos : " << pos << endl;
		cout << "Word : " << word << endl;

		_wordsInPhrase[wordCounter] = word;
		wordCounter++;
		tempPhrase.erase(0, pos + 1);
	}
}*/


/*void Phrase::CreateWords() {
	string tempWord = _userPhrase;
	int wordCounter = 0;
	string wordFromPhrase = "";
	int locator = tempWord.find_first_of(' ');
	int lastLocator = 0;
	int finalSpace = tempWord.find_last_of(' ');

	cout << "Last space : " << finalSpace << endl;

	int size = 0;

	bool isLastSpace = (locator == finalSpace);

	do {
		locator = tempWord.find_first_of(' ', lastLocator);
		isLastSpace = (locator == finalSpace);

		cout << "Locator : " << locator << endl;

		size = locator - lastLocator;

		cout << "Size : " << size << endl;

		wordFromPhrase = tempWord.substr(lastLocator, size);

		cout << "Word" << wordFromPhrase << endl;

		cout << "Word counter : " << wordCounter << endl;

		//iWords[wordCounter] = new Word();
		//iWords[wordCounter]->SetWord(wordFromPhrase);
		_wordsInPhrase[wordCounter] = wordFromPhrase;

		cout << "Array word" << _wordsInPhrase[wordCounter] << endl;

		wordCounter++;
		lastLocator = locator;

		cout << "Last locator : " << lastLocator << endl;

		cout << "End loop." << endl;
	} while (!isLastSpace);

	wordFromPhrase = tempWord.substr(locator);
	_wordsInPhrase[wordCounter] = wordFromPhrase;
	wordCounter++;
	

	_numberOfWords = wordCounter;
	cout << "END" << endl;
}*/

void Phrase::CreateWords() {
	string tempPhrase = _userPhrase;
	string word = "";
	int wordCounter = 0;

	int start = 0;
	int end = tempPhrase.find(' ');
	while (end != string::npos) {
		word = tempPhrase.substr(start, (end - start));
		_wordsInPhrase[wordCounter] = word;
		wordCounter++;
		start = end + 1;
		end = tempPhrase.find(' ', start);
	}

	word = tempPhrase.substr(start, (end - start));
	_wordsInPhrase[wordCounter] = word;
	wordCounter++;

	_numberOfWords = wordCounter;

}

void Phrase::SetUserPhrase()
{
	string userInput = "";
	cout << "Enter the phrase to be manipulated." << endl
		<< "Phrase : ";
	cin.ignore(kEndOfLine, '\n');
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

/*string Phrase::ReorderPhrase() {
	string reorderedPhrase = "";
	string reorderedPhrase[1000];
	for (int index = 0; index < _numberOfWords; index++) {
		Word tempWord = Word();
		tempWord.SetWord(_wordsInPhrase[index]);
		int numberInAlphabet = tempWord.GetNumberInAlphabet();
	}
}*/

string Phrase::ReversePhrase() {
	string reversedPhrase = "";
	for (int index = _numberOfWords; index >= 0; index--) {
		reversedPhrase.append(_wordsInPhrase[index]);
		reversedPhrase.append(" ");
	}
	return reversedPhrase;
}

string Phrase::Rot13Phrase() {
	string rot13Phrase = "";
	string currentWord = "";
	string tempRot13 = "";
	for (int index = 0; index < _numberOfWords; index++) {
		Word tempWord = Word();
		
		tempWord.SetWord(_wordsInPhrase[index]);

		cout << "Word : " << tempWord.GetWord() << endl;

		tempRot13 = tempWord.GetRot13Word();

		cout << "Rot13 : " << tempRot13 << endl;

		rot13Phrase.append(tempRot13);
		rot13Phrase.append(" ");
	}
	return rot13Phrase;
}

string Phrase::LowerCasePhrase() {
	string lowerCaseWord = "";
	string lowerCasePhrase = "";

	for (int index = 0; index < _numberOfWords; index++) {
		Word tempWord = Word();
		tempWord.SetWord(_wordsInPhrase[index]);
		lowerCaseWord = tempWord.GetLowerCaseWord();
		lowerCasePhrase.append(lowerCaseWord);
		lowerCasePhrase.append(" ");
	}
	return lowerCasePhrase;
}

string Phrase::PigLatin() {
	string pigLatinWord = "";
	string pigLatinPhrase = "";

	for (int index = 0; index < _numberOfWords; index++) {
		Word tempWord = Word();
		tempWord.SetWord(_wordsInPhrase[index]);
		pigLatinWord = tempWord.GetPigLatin();
		pigLatinPhrase.append(pigLatinWord);
		pigLatinPhrase.append(" ");
	}
	return pigLatinPhrase;
}

void Phrase::TestCode() {

}

void Phrase::FillFakeString() {
	_wordsInPhrase[0] = "Dog";
	_wordsInPhrase[1] = "Cat";
	_wordsInPhrase[2] = "Mouse";
	_numberOfWords = 3;
}
