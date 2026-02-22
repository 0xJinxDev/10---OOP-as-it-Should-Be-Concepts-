#include <iostream>

using namespace std;


class clsPerson{

public:
	string FullName = "Jinx Devs";
};

class clsEmployee : public clsPerson {

public:
	string Title = "CEO";
};



int main() {

	clsEmployee Employee;
	
	clsPerson* Person = &Employee;
	cout << Person->FullName << endl;
	
	return 0;
}