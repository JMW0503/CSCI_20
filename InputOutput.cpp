#include <iostream>

using namespace std;

int main()

{
    float num;

    string answer = "You entered ";
    
    string answerTwo = "Twice that value is ";

    cout<<"Please enter an integer: ";

    cin>>num;

    cout<<answer<<(num)<<endl;

    cout<<answerTwo<<(num * 2)<<endl;

    return 0;
}