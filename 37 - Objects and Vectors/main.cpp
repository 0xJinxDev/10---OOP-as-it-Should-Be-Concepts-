#include <iostream>
#include <vector>
using namespace std;

class clsA {
public:
	int x;

	clsA(int value) : x(value) {

	}

	void Print() const {
		cout << "The value of x= " << x << endl;
	}
};

void FillVector(vector <clsA>& vA, int number) {

	for (int i = 0; i < number; i++) {
		vA.emplace_back(i);
	}
}

void PrintVector(const vector <clsA>& vA) {

	for (const clsA& A : vA) {
		A.Print();
	}

}
int main() {

	vector <clsA> vA;
	FillVector(vA, 5);
	PrintVector(vA);
	return 0;
}