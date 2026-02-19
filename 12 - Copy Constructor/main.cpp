#include <iostream>

using namespace std;


class clsAddress {

private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;

public:

	clsAddress(const string& AddressLine1, const string& AddressLine2, const string& POBox, const string& ZipCode) {
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_ZipCode = ZipCode;
	}
	
	//Copy constructor, The compiler will do it automatically, but this is for explaination

	clsAddress(const clsAddress& OldObject) {
		_AddressLine1 = OldObject._AddressLine1;
		_AddressLine2 = OldObject._AddressLine2;
		_POBox = OldObject._POBox;
		_ZipCode = OldObject._ZipCode;
	}
	void setAddressLine1(const string& AddressLine1) {
		_AddressLine1 = AddressLine1;
	}
	void setAddressLine2(const string& AddressLine2) {
		_AddressLine2 = AddressLine2;
	}
	void setPOBox(const string& POBox) {
		_POBox = POBox;
	}
	void setZipCode(const string& ZipCode) {
		_ZipCode = ZipCode;
	}
	string getAddressLine1() {
		return _AddressLine1;
	}
	string getAddressLine2() {
		return _AddressLine2;
	}
	string getPOBox() {
		return _POBox;
	}
	string getZipCode() {
		return _ZipCode;
	}
	void Print() {
		cout << "Address line 1: " << _AddressLine1 << endl;
		cout << "Address line 2: " << _AddressLine2 << endl;
		cout << "POBox         : " << _POBox << endl;
		cout << "ZIP code      : " << _ZipCode << endl;
	}
};

int main() {

	clsAddress Address("Jinx", "Devs", "0000", "0000");
	Address.Print();

	clsAddress Address2 = Address;
	Address2.Print();
	return 0;
}