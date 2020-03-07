/**********************************************************************
reverseEngineer.cpp
Author: Matt
Date Created: 03/04/2020
Description: [PROGRAM DESCRIPTION]
**********************************************************************/

#include <iostream>
using namespace std;


class Thing
{
    private:
    int number;

    public:
    Thing(int n) : number(n)
    {}

    int getNumber()
    {
        return number;
    }

};



int DoAThing()
{
    return 42;
}

int main()
{

    Thing myThing(42);

    int theNumber = myThing.getNumber();


    // returns 42
    int x = DoAThing();

    return 0;
}