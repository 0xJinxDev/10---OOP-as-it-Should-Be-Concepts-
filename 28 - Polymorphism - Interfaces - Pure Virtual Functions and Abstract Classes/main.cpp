#include <iostream>

using namespace std;

// Abstract class / Interface / Contract
class clsMobile {

	virtual void Dial(const string& Phone) = 0;
	virtual void SendSMS(const string& Message, const string& Phone) = 0;
	virtual void TakePhoto() = 0;
};

class clsiPhone : public clsMobile {

public:
	void Dial(const string& Phone) {

	}
	void SendSMS(const string& Message, const string& Phone) {

	}
	void TakePhoto() {
 
	}

};

int main() {

	clsiPhone iPhone;

	return 0;
}