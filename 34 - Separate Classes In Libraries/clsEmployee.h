#pragma once
#include "clsPerson.h"

class clsEmployee : public clsPerson {

public:

	void Print() {
		cout << "Hi, I'm an employee" << endl;
	}
};