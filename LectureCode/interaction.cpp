#include <iostream>
using namespace std;

int main()
{
    // // cout two different ways
    // cout<<"hello"<<endl<<"more stuff";
    
    //cout<<"hello"<<endl;
    //cout<<"more stuff"<<endl;
    //cout<<"";

    //<< = insertion operator

    // int userInput;
    //cout<<"Enter your favorite number"<<endl;
    //cin>>userInput;

    //cout<<"User input:"<<userInput<<endl;

    int userNumber;
    char userChar;
    float userFloat;

    cout<<"Enter a integer, a character and  float";
    cin>>userNumber>>userChar>>userFloat;

    cout<<"The number was"<<userNumber<<endl;
    cout<<"The character was "<<userChar<<endl;
    cout<<"The float was"<<userFloat<<endl;

    return 0;
}