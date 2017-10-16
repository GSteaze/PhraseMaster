#include "MenuIO.h"
#include <iostream>
#include <string>
#include "Word.h"
#include "Phrase.h"

using namespace std;

const int kEndOfLine = 1024;


MenuIO::MenuIO()
{
	Phrase _userPhrase = Phrase();
}


MenuIO::~MenuIO()
{
}

void MenuIO::RunMenu() {
	WelcomeMessage();
	MenuSelection();
}

void MenuIO::WelcomeMessage() {
	cout << "Welcome to PhraseMaster!" << endl << endl;
}

void MenuIO::DisplayMenu() {
	cout << endl << "Menu Options" << endl
		<< "1. New Phrase" << endl
		<< "2. Reverse Words" << endl
		<< "3. Sort Words" << endl
		<< "4. Rot13" << endl
		<< "5. Pig Latin" << endl
		<< "6. Quit" << endl;
}

void MenuIO::MenuSelection() {
	int userSelection = 0;
	bool isRunAgain = true;

	while (isRunAgain) {
		DisplayMenu();
		
		userSelection = ValidateSelection();
		cout << endl;

		switch (userSelection) {
		case 1: _userPhrase.SetUserPhrase();
			_userPhrase.CreateWords();
			break;
		case 2: cout << "Reversed Phrase : " << _userPhrase.ReversePhrase() << endl;
			break;
		case 3: cout << "Reordered Phrase : " << _userPhrase.ReorderPhrase() << endl;
			break;
		case 4: cout << "Rot13 : " << _userPhrase.Rot13Phrase() << endl;
			break;
		case 5: cout << "Pig Latin : " << _userPhrase.PigLatin() << endl;
			break;
		case 6: isRunAgain = false;
			break;
		default: cout << "Invalid Selection. Please try again." << endl;
		}
	}
}

int MenuIO::ValidateSelection() {
	int userInput = 0;

	bool isValid = false;
	
	cout << "Enter 1 - 6 to select option" << endl
		<< "Selection : ";
	cin >> userInput;

	while (!isValid) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(kEndOfLine, '\n');
			cout << "Please try again: ";
			cin >> userInput;
		}
		if (userInput < 1 || userInput > 6) {
			cout << "Input must be 1 - 6" << endl;
			cin.clear();
			cin.ignore(kEndOfLine, '\n');
			cout << "Please try again: ";
			cin >> userInput;
		}
		else if (userInput >= 1 && userInput <= 6) {
			isValid = true;
		}
	}
	return userInput;
}
