#include <iostream>

using namespace std;


class clsPerson {
//Only accessable within the class
private:
	int x = 10;
	
	int Method1() {
		return x;
	}
//Only accessable within the class and inherited classes
protected:
	int y = 10;

	int Method2() {
		return y;
	}

//Can be accessed from anywhere
public:

	string FirstName;
	string LastName;

	int Method3() {
		return Method1() * Method2();
	}
};


int main() {

	clsPerson Person;
	cout<<Person.Method3();
}