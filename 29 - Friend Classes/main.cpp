#include <iostream>

using namespace std;

class clsA {
private:
	int _Var1;
public:
	int Var2;

	clsA() {
		_Var1 = 10;
		Var2 = 20;
	}

	friend class clsB;
};

class clsB {
public:

	void Display(clsA A) {
		cout << "The value of var 1 is: " << A._Var1 << endl;
		cout << "The value of var 2 is: " << A.Var2 << endl;

	}
};

int main() {
	
	clsA A;
	clsB B;

	B.Display(A);
	return 0;
}