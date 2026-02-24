#include <iostream>
using namespace std;

class clsA
{
public:
    int x;

    clsA() : x(0) {}

    clsA(int value) : x(value) {}

    void Print() const
    {
        cout << "The value of x = " << x << endl;
    }
};


clsA* CreateArray(short size)
{
    return new clsA[size];
}


void FillArray(clsA* arr, short size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = clsA(i);
    }
}


void PrintArray(clsA* arr, short size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i].Print();
    }
}


void DeleteArray(clsA* arr)
{
    delete[] arr;
}

int main()
{
    short NumberOfObjects = 5;

    clsA* arrA = CreateArray(NumberOfObjects);

    FillArray(arrA, NumberOfObjects);

    PrintArray(arrA, NumberOfObjects);

    DeleteArray(arrA);

    return 0;
}