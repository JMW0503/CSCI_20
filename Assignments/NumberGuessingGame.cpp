/*
Number Guessing Game
Justin Wilson
2/23/2020

The program will randomly select a number between 1 and 10, the player (user) 
will enter a guess, the program will compare the two numbers, and let the player 
know if they guessed correctly or not.

*/
#include <random>
#include <chrono>
#include <iostream>

using namespace std;

int main()
{
    std::default_random_engine rng{static_cast<uint_fast32_t>(std::chrono::system_clock::now().time_since_epoch().count())};

   
    std::uniform_int_distribution<int> dist{1, 10};


    int randomNumber1 = dist(rng); 
    
    int x,y;
    y = randomNumber1;
    x = 0;
    
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"Please enter a number between 1 and 10: ";
    cin>>x;
    
    if(x!=y)
    cout<<"Too bad, you lose. You didn't guess the number right.";

    if(x==y)
    cout<<"Congratulations, you win! You guessed the right number.";


}