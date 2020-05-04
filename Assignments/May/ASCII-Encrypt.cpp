#include <iostream>
using namespace std;


int main()
{

    char ch = '0';

    int encodedInteger = static_cast<int>(ch);
    cout << "Enter in a character: ";
    cout<< encodedInteger << endl;

    int Multiplier = 0;
    cout << "Enter a multiplier: ";
    cin >> Multiplier;

    int Adder = '+= 0';
    cout << "Enter an adder : ";
    cin >> Adder;

    cout << "Encrypted value: " << encodedInteger * Multiplier + Adder << endl;


    return 0;

}

