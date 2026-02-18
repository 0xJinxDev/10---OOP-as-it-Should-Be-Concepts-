//Encapsulation is hiding object’s internal data and allowing access to it only through controlled public methods
#include <iostream>

using namespace std;


class clsPerson {

private:
	string _FirstName;
	string _LastName;

public:

	void setFirstName(const string& FirstName) {
		_FirstName = FirstName;
	}
	void setLastName(const string& LastName) {
		_LastName = LastName;
	}
	string getFirstName() {
		return _FirstName;
	}
	string getLastName() {
		return _LastName;
	}
	string getFullName() {
		return _FirstName + " " + _LastName;
	}

};

int main() {

	clsPerson Person;
	Person.setFirstName("Jinx");
	Person.setLastName("Devs");

	cout << "First Name: " << Person.getFirstName() << endl;
	cout << "Last Name: " << Person.getLastName() << endl;
	cout << "Full Name: " << Person.getFullName() << endl;


	return 0;
}