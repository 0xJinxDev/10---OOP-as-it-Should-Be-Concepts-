#pragma once
#include <iostream>

using namespace std;
class clsString
{

private:
	string _Value;

public:
	clsString() : _Value("") {

	}

	clsString(const string& Value) : _Value(Value) {

	}

	void setValue(const string& Value) { _Value = Value; }
	string getValue() const { return _Value; }

	static short CountWords(const string& Value, const string& Delim) {

		if (Value.empty() || Delim.empty())
			return 0;

		short Counter = 0;
		bool InsideWord = false;
		for (short i = 0; i < Value.length();) {

			if (Value.substr(i, Delim.length()) != Delim) {
				if (!InsideWord) {
					InsideWord = true;
					Counter++;
				}
				i++;
			}
			else {
				InsideWord = false;
				i += Delim.length();
			}

		}
		return Counter;
	}

	short CountWords(const string& Delim = " ") const {
		return CountWords(_Value, Delim);
	}
};

