/*
Lotto Numbers
Author: Justin Wilson
Date Created: 2/12/2020
Description:Using the Random Numbers example code for guidance, write a program that produces lotto numbers for the user. The program should output five (5) numbers, each number ranging from 1-47. Each number should be separated by a space.
*/



#include <random>
#include <chrono>
#include <iostream>

using namespace std;

int main()
{
    std::default_random_engine rng{static_cast<uint_fast32_t>(std::chrono::system_clock::now().time_since_epoch().count())};

   
    std::uniform_int_distribution<int> dist{1, 47};


    int randomNumber1 = dist(rng); 
    int randomNumber2 = dist(rng); 
    int randomNumber3 = dist(rng); 
    int randomNumber4 = dist(rng);
    int randomNumber5 = dist(rng);

    cout<<"Lucky Lotto Numbers:"<<endl; 
    cout<<randomNumber1<<" ";
    cout<<randomNumber2<<" ";
    cout<<randomNumber3<<" ";
    cout<<randomNumber4<<" ";
    cout<<randomNumber5<<" ";

}