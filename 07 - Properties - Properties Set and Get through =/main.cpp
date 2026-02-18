#include <iostream>

using namespace std;


class clsPerson {
private:
	string _FirstName;

public:

	void setFirstName(const string& FirstName) {
		_FirstName = FirstName;
	}
	string getFirstName() {
		return _FirstName;
	}

	__declspec(property(get = getFirstName, put = setFirstName)) string FirstName;

};

int main() {

	clsPerson Person;
	
	Person.FirstName = "Jinx";
	cout << Person.FirstName<<endl;


}