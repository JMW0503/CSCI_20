/***************************************
Sort-ish
Author: Justin Wilson
Date Created: 4/19/2020
Description: sorts three entered values.
***************************************/

#include <iostream>
using namespace std;

void sortie(int& a, int& b, int& c);


int main()
{
	cout << "Enter three numbers: ";
	int first, second, third;
	cin >> first >> second >> third;
	cout << endl;

	cout << "Unsorted: " << first << ", " << second << ", " << third << endl;

	sortie(first, second, third);
	cout << "Sorted:   " << first << ", " << second << ", " << third << endl;

	return 0;
}

void sortie(int& num1, int& num2, int& num3)
{
	if(num1 > num2)
	{
		int temp = num1; //temp = 0
		num1 = num2;
		num2 = temp;
	};
	}
	
