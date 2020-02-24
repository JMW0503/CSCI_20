/*
The Answer
Justin Wilson
2/23/2020

program that will ask the user to input the answer to the ultimate question of life, the universe, and everything,
wait for the user to enter the answer, and then display whether they got it correct.
*/
#include <iostream>
using namespace std;

int main()
{
    
    int x,y;
    y = 42;
    x = 0;

    cout<<"What is The Answer to the Ultimate Question of life, the Universe, and Everything?"<<endl;
    cin>>x;

    if(x!=y)
    cout<<"Nope.";
    
    if(x==y)
    cout<<"You are correct.";
    
    return 0;
}