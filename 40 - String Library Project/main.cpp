#include <iostream>
#include "clsString.h"

using namespace std;


int main() {

	clsString S1, S2("Jinx");

	S1.setValue("Jinx_Devs");
	cout << "The value of S1 is: "<<S1.getValue() << endl;
	cout << "The value of S2 is: "<<S2.getValue() << endl;

	cout << "The count of words in \"Jinx Devs\" is: " << clsString::CountWords("Jinx Devs"," ") << endl;
	cout << "The count of words in \"Jinx-Devs\" is: " << clsString::CountWords("Jinx-Devs", "-") << endl;
	cout << "The count of words in S1 is: " << S1.CountWords("_") << endl;
	cout << "The count of words in S2 is " << S2.CountWords() << endl;

}