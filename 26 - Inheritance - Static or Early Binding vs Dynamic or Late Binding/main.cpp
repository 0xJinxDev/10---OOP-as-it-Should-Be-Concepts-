#include <iostream>

using namespace std;


class clsPerson {

public:
	virtual void Print() {
		cout << "Hi, I'm a person." << endl;
	}

};

class clsEmployee : public clsPerson {

public:

	void Print() {
		cout << "Hi, I'm an employee" << endl;
	}
};

class clsStudent : public clsPerson {

public:
	void Print() {
		cout << "Hi, I'm a student" << endl;
	}
};

int main() {

	clsEmployee Employee;
	clsStudent Student;
	// Static/Early Binding
	Employee.Print();
	Student.Print();

	clsPerson* Person1 = &Employee;
	clsPerson* Person2 = &Student;
	// Dynamic/Late Binding
	Person1->Print();
	Person2->Print();

	return 0;
}