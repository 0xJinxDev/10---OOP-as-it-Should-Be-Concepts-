#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"
#include "clsStudent.h"

using namespace std;

int main() {

	clsEmployee Employee;
	clsStudent Student;

	Employee.Print();
	Student.Print();

	clsPerson* Person1 = &Employee;
	clsPerson* Person2 = &Student;

	Person1->Print();
	Person2->Print();

	return 0;
}