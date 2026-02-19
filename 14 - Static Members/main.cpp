#include <iostream>

using namespace std;


class clsPerson {

private:
	string _FullName;

public:
	static int counter;
	clsPerson() {
		counter++;
	}

	void setFullName(const string& FullName) {
		_FullName = FullName;
	}

	string getFullName() {
		return _FullName;

	}

};

int clsPerson::counter = 0;
int main() {

	clsPerson Person1, Person2;

	cout << Person1.counter << endl;
	cout << Person2.counter << endl;

	clsPerson Person3;
	cout << Person1.counter << endl;
	cout << Person2.counter << endl;
	cout << Person3.counter << endl;


	return 0;
}