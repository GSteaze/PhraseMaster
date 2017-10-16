#include <iostream>
#include <string>
#include "Word.h"
#include "Phrase.h"
#include "MenuIO.h"

using namespace std;

void TestCode() {
	//Phrase Test
	Phrase firstPhrase = Phrase();
	cout << "Initial Phrase: " << firstPhrase.GetPhrase() << endl;
	firstPhrase.CreateWords();
	//firstPhrase.ParseUserInput();
	//cout << "Parsed phrase: " << firstPhrase.GetPhrase() << endl;
	//firstPhrase.FillFakeString();
	cout << "Reversed phrase: " << firstPhrase.ReversePhrase() << endl;
	cout << "Rot13: " << firstPhrase.Rot13Phrase() << endl;
	cout << "Lowercase : " << firstPhrase.LowerCasePhrase() << endl;
	cout << "Moving On." << endl;

	//Word Test
	/*Word firstWord = Word();
	firstWord.SetWord();
	cout << firstWord.GetWord() << endl;
	cout << firstWord.GetLowerCaseWord() << endl;
	cout << firstWord.GetReverseWord() << endl;
	cout << firstWord.GetRot13Word() << endl;
	cout << firstWord.GetNumberInAlphabet() << endl;*/

	system("pause");

}

int main() {
	
	MenuIO firstMenu = MenuIO();
	firstMenu.RunMenu();

	return 0;
}