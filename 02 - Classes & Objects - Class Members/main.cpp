#include <iostream>
using namespace std;


class clsPerson {

public:
	//Data members
	string FirstName;
	string LastName;
	//Member methods
	string GetFullName() {
		return FirstName + " " + LastName;
	}

};

int main() {

	clsPerson Person;
	Person.FirstName = "Jinx";
	Person.LastName = "Devs";

	cout << Person.GetFullName();
	return 0;
}