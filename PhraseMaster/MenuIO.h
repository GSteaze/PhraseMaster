#pragma once
#include <iostream>
#include <string>
#include "Word.h"
#include "Phrase.h"

using namespace std;

class MenuIO
{
private:

	Phrase _userPhrase;

	int ValidateSelection();
	void WelcomeMessage();
	void DisplayMenu();
	void MenuSelection();


public:
	MenuIO();
	~MenuIO();

	void RunMenu();
	


};

