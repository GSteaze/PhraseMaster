#include <iostream>
#include <string>
#include "Word.h"
#include "Phrase.h"

using namespace std;

void TestCode() {
	Phrase firstPhrase = Phrase();
	cout << firstPhrase.GetPhrase() << endl;
	firstPhrase.CreateWords();
	firstPhrase.ParseUserInput();
	cout << "Moving On." << endl;
	/*Word firstWord = Word();
	firstWord.SetWord();
	cout << firstWord.GetWord() << endl;
	cout << firstWord.GetLowerCaseWord() << endl;
	cout << firstWord.GetReverseWord() << endl;
	cout << firstWord.GetRot13Word() << endl;
	cout << firstWord.GetNumberInAlphabet() << endl;*/

	string word = "";
	cin >> word;

}

int main() {
	TestCode();


	return 0;
}