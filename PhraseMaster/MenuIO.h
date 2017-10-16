#pragma once
#include <iostream>
#include <string>
#include "Word.h"
#include "Phrase.h"

using namespace std;

const int kEndOfLine = 1024;

class MenuIO
{
private:

	Phrase _userPhrase;

	int ValidateSelection(int userInput);


public:
	MenuIO();
	~MenuIO();

	void WelcomeMessage();
	void DisplayMenu();
	void MenuSelection();


};

