#include <iostream>

using namespace std;


class clsPerson {

	class clsAddress {

	public:
		string AddressLine1;
		string AddressLine2;
		string City;
		string Country;

		clsAddress(const string& AddressLine1, const string& AddressLine2, const string& City, const string& Country) :
			AddressLine1(AddressLine1), AddressLine2(AddressLine2), City(City), Country(Country){ }

		void Print() {
			cout << "Address line 1: " << AddressLine1 << endl;
			cout << "Address line 2: " << AddressLine2 << endl;
			cout << "City: " << City << endl;
			cout << "Country: " << Country << endl;
		}
	};

public:
	string FullName ;
	clsAddress Address;

	clsPerson(): FullName("Jinx Devs"), Address("Jinx", "Jinx", "Jinx", "Jinx") {

	}


};

int main() {

	clsPerson Person;
	Person.Address.Print();

	return 0;
}