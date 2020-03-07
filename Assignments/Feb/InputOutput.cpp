/*
Input/Output Number
Author: Justin Wilson
Date Created: 2/6/2020
Description: Asks user to input an integer value, waits for the user to
ender the value, and then displays the entered value back to the terminal.
After, the program displays two times the value entered to the terminal as well.
*/

#include <iostream>

using namespace std;

int main()

{
    int num;

    string answer = "You entered ";
    
    string answerTwo = "Twice that value is ";

    cout<<"Please enter an integer: ";

    cin>>num;

    cout<<answer<<(num)<<endl;

    cout<<answerTwo<<(num * 2)<<endl;

    return 0;
}