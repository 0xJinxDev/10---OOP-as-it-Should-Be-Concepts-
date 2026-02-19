#include <iostream>

using namespace std;


class clsPerson {


public:
	static int Method1() {
		return 10;
	}

};

int main() {
	//We can call static methods without objects
	cout << clsPerson::Method1();
	return 0;
}