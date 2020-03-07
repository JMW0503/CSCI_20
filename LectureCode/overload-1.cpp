/**********************************************************************
overload.cpp
Author: Matt
Date Created: 03/04/2020
Description: [PROGRAM DESCRIPTION]
**********************************************************************/

#include <iostream>
using namespace std;

int addNumbers(int x, int y)
{
    cout<<"Using ints"<<endl;
    return x + y;
}


double addNumbers(double x, double y)
{
    cout<<"Using doubles"<<endl;
    return x + y;
}

int main()
{

    cout<<addNumbers(3, 5)<<endl;

    //cout<<addNumbers(5, 9)<<endl;



    string theString = "Hello World!";


    cout<<theString.substr(5)<<endl;

    cout<<theString.substr(5, 3)<<endl;






    

    return 0;
}