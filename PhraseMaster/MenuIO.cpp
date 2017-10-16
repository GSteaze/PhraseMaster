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
	WelcomeMessage();
	MenuSelection();
}


MenuIO::~MenuIO()
{
}

void MenuIO::WelcomeMessage() {
	cout << "Welcome to PhraseMaster!" << endl << endl;
}

void MenuIO::DisplayMenu() {
	cout << "Menu Options" << endl
		<< "1. New Phrase" << endl
		<< "2. Reverse Words" << endl
		<< "3. Sort Words" << endl
		<< "4. Rot13" << endl
		<< "5. Quit" << endl;
}

void MenuIO::MenuSelection() {
	int userSelection = 0;
	bool isRunAgain = true;

	while (isRunAgain) {
		DisplayMenu();
		cout << "Enter 1 - 5 to select option" << endl
			<< "Selection : ";
		cin >> userSelection;

		switch (userSelection) {
		case 1: _userPhrase.SetUserPhrase();
			break;
		case 2: cout << "Reversed Phrase : " << _userPhrase.ReversePhrase() << endl;
			break;
		case 3: cout << "Reordered Phrase : " << _userPhrase.ReorderPhrase() << endl;
			break;
		case 4: cout << "Rot13 : " << _userPhrase.Rot13Phrase() << endl;
			break;
		case 5: isRunAgain = false;
			break;
		}
	}
}

int MenuIO::ValidateSelection(int userInput) {
	bool isValid = false;
	
	while (!isValid) {
		while (cin.fail()) {
			cin.clear();
			cin.ignore(kEndOfLine, '\n');
			cout << "Please try again: ";
			cin >> userInput;
		}
		if (userInput < 1 || userInput > 5) {
			cout << "Input must be 1 - 5" << endl;
			cin.clear();
			cin.ignore(kEndOfLine, '\n');
			cout << "Please try again: ";
			cin >> userInput;
		}
	}
	return userInput;
}
