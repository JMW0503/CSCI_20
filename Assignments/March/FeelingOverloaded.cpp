/***************************************
[PROGRAM NAME]
Author: [YOUR NAME]
Date Created: [DATE]
Description: [PROGRAM DESCRIPTION]
***************************************/

#include <iostream>
using namespace std;

/*
Implement the appropriate functions that will make the code in main work
as provided.

Hello

Hello, Bob

Hello
You look great! Have you lost weight?

Hello
You look nice...NOT!

Hello, Bob
You look great! Have you lost weight?

Hello, Bob
You look nice...Not!

*/


void greeting(){

    cout<<endl<<"Hello";

}

void greeting(string){
    greeting();
    cout<<" ,Bob";
}

void greeting(bool){
    
    if (bool(true)){
        cout<<endl<<"You look great! Have you lost weight?";
    }
    
}



int main()
{
    // Greeting 1
    greeting();
    cout<<endl;

    // Greeting 2
    greeting(string("Bob"));
    cout<<endl;

    // Greeting 3
    greeting(true);
    cout<<endl;
/*
    // Greeting 4
    greeting(false);
    cout<<endl;
/*
    // Greeting 5
    greeting("Bob", true);
    cout<<endl;
/*
    // Greeting 6
    greeting("Bob", false);
    cout<<endl;
*/
    return 0;
}