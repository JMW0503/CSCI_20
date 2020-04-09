/*
Count Off
Justin Wilson 
4/4/2020

Description below
*/


#include <iostream>
using namespace std;
 
 
 
 
/*
Prompts user for entering a number in the specified range
and stores value in memory
 
displays numbers from the input starting point up to 10
 
Validates input by checking whether number entered is between 1-10,
display all of the numbers after the entered number in ascending order up to 10.
 
 
 
Prompts user to run again after previous run. Program runs again or exits
bases on user input.
*/
 
void count()
{
    cout << endl << "Enter a number between 1 and 10 " << endl;
   
    int x = 0;//initialize
    cin >> x;
 
    while (x < 11)//evaluate
 
    {
        cout << x << " ";
        x++;//increment
    }
}
 
 
 
 
int main()
{
 
count();
 
string answer;
answer = "Y" || "N";
 
cout << endl << "Would you like to run the program again? (Y for yes, N for no)  ";
 
cin >> answer;
 
while (answer == "Y")
{
    return main();
}
 
while (answer == "N")
{
    return 0;
}
 
 
}