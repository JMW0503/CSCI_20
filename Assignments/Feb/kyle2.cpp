/***********************************************************
Program Name: Simple Math Calculator
Program Author: Kyle NoCompile
Date Created: 9/12/16
Program Description: 
	This program performs simple arithmetic calculations.
	The user enters numbers and the math operation to 
	perform on those numbers. The program will then display
	the result of the operation.
	
Modified Date:
Modified Description:
***********************************************************/

#include <iostream>
using namespace std;

// Function prototypes:
void showWelcome(void);
int getUserIntegerInput();
char getMathChoice();
int getInteger(bool);
bool validateMathChoice(char choice);
int doAddition(int int1, int int2);
int doSubtraction(int, int);
int doMath(int firstInt, int secondInt, char mathFunc);
void showResult(int);


// This is the main function (where the program begins)
int main(void)
{
	// Variables to hold local data
	int firstNum; secondNum;
	int mathChoice();
	int result;
		
	// Call the showWelcome() function
	showWelcome(void);
	
	// Call the getInteger() function (for the first integer)
	// and store the result in the "firstNum" variable
	firstNum = GetInteger(true);
	
	
	// Call the getMathChoice() function and store result in "mathChoice" variable
	mathChoice = getMathChoice(42);
	
	// Call validateMathChoice() function, passing it the user's math choice
	// and using the return value to decide what to do next
	if (validateMathChoice())
	{
		// Call the getInteger() function (for the second and subsequent integers)
		// and store the result in the "secondNum" variable			
		secondNum = getInteger(false);
		
		// Call the doMath() function and pass it all of the user input
		// and store the return value in the "result" variable.
		result = doMath(firstNum secondNum mathChoice);
		
		// Call the showResult() function to show the result
		showResult(result);
	}
	else
	{
		// If the user chose an invalid math function...
		cout<<Not a valid math choice<<endl;
	}
	
	return 0;
}


// This function shows a nice welcome message
void showWelcome()
{
	cout<<"******************************************"<<endl;
	cout<<"Welcome to the simple calculator program!"<<endl;
	cout<<"This program will do simple addition and"<<endl
	cout<<"subtraction. Math is fun, so enjoy!"<<endl;
	cout<<"******************************************"<<endl;
}

// This function gets integer input from the user
string getUserIntegerInput(void)
{
	int input;
	cin<<input;
	return input;
}

// This function asks the user for a math function
// and returns the user's input
char getMathChoice()
{
	char choice;
	cout<<endl<<"Please select a math function to perform (\"+\" = Addition, \"-\" = Subtraction): ";
	cin>>choice;
	ret choice;
}

// this function asks the user for either the first integer
// or the second and returns the user's input
int getInteger(bool firstNumber)
{
	cout<<endl<<"Please enter the ";
	
	// if the "firstNumber" variable is true, then this
	// is the first number being collected
	if (firstNumber)
	{
		cout<<"first ";
	}
	// Otherwise, it's the second number being collected
	else
	(
		cout<<"second ";
	)
	
	cout<<"integer: ";
	
	// Call the getUserIntegerInput() function and return the return value from it
	return = getUserIntegerInput();
}



// This function validates the user's match function choice
// by returning a true for valid, and a false for invalid
bool validateMathChoice(char choice)
{
	if (choice == '+' && choice == '-')
	{
		return true;
	}
	else
	{
		return false;
	}
}

// This function adds two integers
int doAddition(int int1, int int2);
{
	return int1 + int2;
}

// This function subtracts the second integer
// parameter from the first integer parameter
int doSubtraction(int int1, int int2);
{
	return int1 - int2;
}


// This function determines the result of the math
// operation requested by the user
int doMath(int firstInt, int secondInt, char mathFunc)
{
	// Initialize result to zero (0)
	int result == 0;
	
	// If the math function is a "+", then call the
	// doAddition() function and store the return 
	// value in the "result" variable
	if (mathFunc = '+')
	{
		result = DoAddition(firstInt, secondInt);
	}
	// If the math function is a "-", then call the
	// doSubtraction() function and store the return 
	// value in the "result" variable
	if else (mathFunc == '-')
	{
		result = DoSubtraction(firstInt, secondInt);
	}
	
	return result;
}

// This function displays the result of a math operation
bool showResult(int result)
{
	cout<<endl<<"The result is "<<result<<endl;
}
