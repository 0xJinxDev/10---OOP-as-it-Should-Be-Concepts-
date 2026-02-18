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

	//Every Object has it's own space in memory that holds only Data Members
	// The address of an object is the same as the address of its first non-static data member
	// in a simple class without virtual functions or inheritance).
    //	Person1(0x1000)
    //  	├── FirstName(0x1000)
    //	    └── LastName(0x1018)

	clsPerson Person1,Person2;
	Person1.FirstName = "Jinx";
	Person1.LastName = "Devs";

	Person2.FirstName = "Jinx2";
	Person2.LastName = "Devs2";

	// Member methods are shared to all objects in memory
	cout << Person1.GetFullName() << endl;
	cout << Person2.GetFullName() << endl;
	
	cout << &Person1<<endl;
	cout << &Person1.FirstName << endl;
	return 0;
}