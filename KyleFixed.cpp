/***********************************************************
Program Name: Triangle Area Calculator
Program Author: Kyle NoCompile
Date Created: 8/1/2019
Program Description: 
	This program gets the dimensions of a triangle (base
	and height) from the end user and then calculates the
	area of the triangle. (Base * Height) / 2 
	
Modified Date:
Modified Description:
***********************************************************/

#include <iostream>
//iostream not streamio
using namespace std;

int main()
//needs to be int not integer
{
	float base;
	//needs to be a float not a char
	float height;
	//cant have number in front of height. 
	//needs to be a ; to initialize

	float _answer;

	string answermessage = "The answer is ";
	//cant have space

	// Greet the user
	cout<<"Hello, Friend!" <<endl<<endl;
	// needs ""  instead of <<  >>

	// Ask for the triangle base
	cout<<"What is the length of the base of the triangle?"<<endl;
	//doesn't need <<  >> again
	cin>>base;

	// Ask for the triangle height
	cout<<endl<<"What is the height of the triangle?";
	//cout not cin
	cin>>height;
	//cin not out

	// Reassuring message
	cout <<endl<<"Thanks, I'm doing some math now..."<<endl;
	//>> not << also needs to end with ; and is missing an <

	// Do some math
	_answer = base * height;
	
	// Display the area of the triangle
	cout<<answermessage<<(_answer / 2)<<endl;
	//no space between answer and message

	return 0;
}
