#include <iostream>
#include "clsDate.h"

using namespace std;


int main() {

	clsDate Date(31, 2023);
	Date.Print();
	clsDate Date2("1/3/2024");
	Date2.Print();
	clsDate Date3;
	Date3.Print();

	return 0;
}