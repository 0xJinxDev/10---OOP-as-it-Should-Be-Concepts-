#include <iostream>

using namespace std;


class clsPerson {

	class clsAddress {

	public:
		string AddressLine1;
		string AddressLine2;
		string City;
		string Country;


		void Print() {
			cout << "Address line 1: " << AddressLine1<<endl;
			cout << "Address line 2: " << AddressLine2 << endl;
			cout << "City: " << City << endl;
			cout << "Country: " << Country << endl;
		}
	};

public:
	string FUllName = "Jinx Devs";
	clsAddress Address;

	clsPerson() {
		Address.AddressLine1 = "Jinx";
		Address.AddressLine2 = "Jinx";
		Address.City = "Jinx";
		Address.Country = "Jinx";
	}

};

int main() {

	clsPerson Person;
	Person.Address.Print();

	return 0;
}