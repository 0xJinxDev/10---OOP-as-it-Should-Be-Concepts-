#include <iostream>
using namespace std;

class clsEmployee {

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    double _Salary;
    string _Department;

public:

    clsEmployee(const int ID,
        const string& FirstName,
        const string& LastName,
        const string& Title,
        const string& Email,
        const string& Phone,
        double Salary,
        const string& Department)
        : _ID(ID),
        _FirstName(FirstName),
        _LastName(LastName),
        _Title(Title),
        _Email(Email),
        _Phone(Phone),
        _Salary(Salary),
        _Department(Department) {
    }


    int GetID() const { return _ID; }

    void SetFirstName(const string& FirstName) { _FirstName = FirstName; }
    void SetLastName(const string& LastName) { _LastName = LastName; }
    void SetTitle(const string& Title) { _Title = Title; }
    void SetEmail(const string& Email) { _Email = Email; }
    void SetPhone(const string& Phone) { _Phone = Phone; }
    void SetSalary(double Salary) { _Salary = Salary; }
    void SetDepartment(const string& Department) { _Department = Department; }


    string GetFirstName() const { return _FirstName; }
    string GetLastName() const { return _LastName; }
    string GetTitle() const { return _Title; }
    string GetEmail() const { return _Email; }
    string GetPhone() const { return _Phone; }
    double GetSalary() const { return _Salary; }
    string GetDepartment() const { return _Department; }

    string FullName() const {
        return _FirstName + " " + _LastName;
    }

    void SendEmail(const string& Subject, const string& Body) {
        cout << "Email with below subject & body has been sent to: " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }


    void SendSMS(const string& Message) {
        cout << "SMS has been sent to: " << _Phone << endl;
        cout << Message << endl;
    }

    void Print() {
        cout << "___________________________" << endl;
        cout << "ID: " << _ID << endl;
        cout << "First Name: " << _FirstName << endl;
        cout << "Last Name: " << _LastName << endl;
        cout << "Full Name: " << FullName() << endl;
        cout << "Title: " << _Title << endl;
        cout << "Email: " << _Email << endl;
        cout << "Phone: " << _Phone << endl;
        cout << "Salary: " << _Salary << endl;
        cout << "Department: " << _Department << endl;
        cout << "___________________________" << endl;
    }
};


int main() {

    clsEmployee Employee(
        1,
        "Jinx",
        "Devs",
        "Software Engineer",
        "jinx@jinx.jinx",
        "0123456789",
        8000,
        "IT"
    );

    Employee.Print();
    Employee.SendEmail("Welcome", "Welcome to the company!");
    Employee.SendSMS("Your account has been created.");

    return 0;
}
