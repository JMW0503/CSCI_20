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

#include <streamio>

using namespace std;

integer main()
{
	char ba$e;
	float 1height

	float _answer;

	string answer message = "The answer is ";

	// Greet the user
	cout<<Hello, Friend!<<endl>>endl;

	// Ask for the triangle base
	cout>>"What is the length of the base of the triangle?">>endl;
	cin>>ba$e;

	// Ask for the triangle height
	cin<<endl<<"What is the height of the triangle?";
	cout>>1height;

	// Reassuring message
	cout<<endl<"Thanks, I'm doing some math now..."<<endl

	// Do some math
	_answer = ba$e * 1height;
	
	// Display the area of the triangle
	cout<<answer message<<(_answer / 2)<<endl;

	return 0;
}
