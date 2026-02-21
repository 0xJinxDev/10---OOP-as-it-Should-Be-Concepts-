#include <iostream>

using namespace std;


class clsPerson {

private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:

	clsPerson(const int ID, const string& FirstName, const string& LastName, const string& Email, const string& Phone) :
		_ID(ID), _FirstName(FirstName), _LastName(LastName), _Email(Email), _Phone(Phone) {
	}

	clsPerson() {

	}


	int GetID() const { return _ID; }



	void SetFirstName(const string& FirstName) { _FirstName = FirstName; }
	void SetLastName(const string& LastName) { _LastName = LastName; }
	void SetEmail(const string& Email) { _Email = Email; }

	string GetFirstName() const { return _FirstName; }
	string GetLastName() const { return _LastName; }
	string GetEmail() const { return _Email; }
	string GetPhone() const { return _Phone; }

	void SetPhone(const string& Phone) { _Phone = Phone; }
	void SendEmail(const string& Subject, const string& Body) {
		cout << "Email with below subject & body has been sent to the email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
	}
	void SendSMS(const string& Message) {
		cout << "SMS with below body has been sent to the phone: " << _Phone << endl;
		cout << Message << endl;
	}

	void Print() {
		cout << "___________________________" << endl;
		cout << "First name: " << _FirstName << endl;
		cout << "Last name: " << _LastName << endl;
		cout << "Full name: " << _FirstName + " " + _LastName << endl;
		cout << "Email: " << _Email << endl;
		cout << "Phone: " << _Phone << endl;
		cout << "___________________________" << endl;
	}
};


class clsEmployee : public clsPerson {
private:
	string _Title;
	string _Department;
	float _Salary;

public:

	void setTitle(const string& Title) { _Title = Title; }
	void setDepartment(const string& Department) { _Department = Department; }
	void setSalary(float Salary) { _Salary = Salary; }

	string getTitle() const { return _Title; }
	string getDepartment() const { return _Department; }
	float getSalary() const { return _Salary; }

};


int main() {

	clsEmployee Employee;



	return 0;
}