#include <iostream>

using namespace std;

class clsCalculator {
private:
    enum enChoice { _None = 0, _Adding, _Subtracting, _Multiplying, _Dividing };

    int _Result = 0;
    int _PreviousResult = 0;
    int _Number = 0;
    enChoice _Choice = _None;

public:

    void Add(int Number) {
        _PreviousResult = _Result;
        _Result += Number;
        _Choice = _Adding;
        _Number = Number;
    }

    void Subtract(int Number) {
        _PreviousResult = _Result;
        _Result -= Number;
        _Choice = _Subtracting;
        _Number = Number;
    }

    void Multiply(int Number) {
        _PreviousResult = _Result;
        _Result *= Number;
        _Choice = _Multiplying;
        _Number = Number;
    }

    void Divide(int Number) {
        if (Number == 0) {
            cout << "Cannot divide by zero!\n";
            return;
        }

        _PreviousResult = _Result;
        _Result /= Number;
        _Choice = _Dividing;
        _Number = Number;
    }

    void CancelLastOperation() {
        if (_Choice == _None) {
            cout << "No operation to cancel.\n";
            return;
        }

        _Result = _PreviousResult;
        _Choice = _None;
        _Number = 0;

        cout << "Last operation cancelled.\n";
    }

    void PrintResult() {
        if (_Choice == _None) {
            cout << "Current result is: " << _Result << endl;
            return;
        }

        switch (_Choice) {
        case _Adding:
            cout << "Result after adding " << _Number << " is: " << _Result << endl;
            break;

        case _Subtracting:
            cout << "Result after subtracting " << _Number << " is: " << _Result << endl;
            break;

        case _Multiplying:
            cout << "Result after multiplying " << _Number << " is: " << _Result << endl;
            break;

        case _Dividing:
            cout << "Result after dividing " << _Number << " is: " << _Result << endl;
            break;

        default:
            cout << "Current result is: " << _Result << endl;
        }
    }

    int GetFinalResult() {
        return _Result;
    }

    void Clear() {
        _Result = 0;
        _PreviousResult = 0;
        _Choice = _None;
        _Number = 0;

        cout << "Calculator cleared.\n";
    }
};

int main() {

    clsCalculator Calculator;

    Calculator.Add(10);
    Calculator.PrintResult();

    Calculator.Subtract(5);
    Calculator.PrintResult();

    Calculator.CancelLastOperation();
    Calculator.PrintResult();

    Calculator.Multiply(3);
    Calculator.PrintResult();

    cout << "Final result: "
        << Calculator.GetFinalResult() << endl;

    return 0;
}
