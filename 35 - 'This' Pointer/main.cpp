#include <iostream>

using namespace std;


class clsEmployee {

public:
	string FirstName;
	float Salary;

	clsEmployee(const string& FirstName, float Salary) {

		this->FirstName = FirstName;
		this->Salary = Salary;
	}


	static void Method1(clsEmployee Employee){
		Employee.Print();
	}

	void Method2() {
		Method1(*this);
	}

	void Print() {
		cout << "First name: " << FirstName << endl;
		cout << "Salary: " << Salary << endl;
	}
};

int main() {

	clsEmployee Employee("Jinx Devs",5000);

	Employee.Method2();

	return 0;
}