#include <iostream>
using namespace std;

int main()
{
    //variables
    //int number = 5; //assignment initialization
    //int number(50); //constructor initialization 
    //int number{5}; //uniform initialization

    //undefined behavior(no initialization)(bad!)
    //int number;

    //int number;
    //number = 5; //assignment operator (put right side into the left side)
    //number == 5; //equality operator (check if things are the same)

    int number = 5;

    //primitive data types
    int integer;
    bool boolean;
    char character;
    float floatingPoint;

    cout<<"Hello"<<number<<endl;

    return 0;
}