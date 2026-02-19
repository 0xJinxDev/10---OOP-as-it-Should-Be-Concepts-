#include <iostream>

using namespace std;



class clsPerson {

private:
	string _FirstName;

public:

	clsPerson() {
		cout << "Hi, I'm the constructor\n";
	}


	//The destructor is the final method that will be called before an object is destroyed
	~clsPerson() {
		cout << "Hi, I'm the destructor\n";
	}
};

void Fun1() {

	clsPerson Person;

}

void Fun2() {
	clsPerson* Person = new clsPerson;
	delete Person;
}
int main() {

	Fun1();
	Fun2();

	return 0;
}