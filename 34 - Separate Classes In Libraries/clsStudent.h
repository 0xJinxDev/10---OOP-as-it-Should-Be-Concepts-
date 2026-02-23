#pragma once
#include "clsPerson.h"

class clsStudent : public clsPerson {

public:
	void Print() {
		cout << "Hi, I'm a student" << endl;
	}
};