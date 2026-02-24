//Objects can be treated like any data type such as int, bool, string ...etc,
//They can be passed to functions as parameters either by reference or by value.

#include <iostream>


using namespace std;

class clsA {
public:
	int x;
	void Print() {
		cout << "The value of x= " << x << endl;
	}
};

void Fun1(clsA A) {
	A.x = 100;
}
void Fun2(clsA& A) {
	A.x = 200;
}

int main() {
	clsA A;
	A.x = 50;
	cout << "\nA.x before calling function1: \n";
	A.Print();

	Fun1(A);
	cout << "\nA.x after calling function1 byval: \n";
	A.Print();

	Fun2(A);
	cout << "\nA.x after calling function2 byref: \n";
	A.Print();
	return 0;
}