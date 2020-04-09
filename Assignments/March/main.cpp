/*************************************************************
Making Time
Author: Justin Wilson
Date Created: 4/4/2020
Description: A program that collects the user's favorite time
             of the day and displays it back to them
*************************************************************/

#include <iostream>
#include "Time.h"
using namespace std;



int main()
{
    int hour, minute;
    bool evening;

    // Ask user to enter their favorite time
    cout<<"Enter your favorite time of the day"<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Minute: ";
    cin>>minute;
    
    cout<<"AM or PM? (0 = AM, 1 = PM): ";
    cin>>evening;

    // instantiate Time object with favorite time
    Time faveTime(hour, minute, evening);

    cout<<"Your favorite time is ";
    faveTime.display();

    // If the favorite time is before 9:00 am...
    if (!faveTime.isEvening() && faveTime.getHour() < 9)
    {
        cout<<"You're a morning person!"<<endl;
    }
    
    // If the favorite time is after 10 pm... 
    if (faveTime.isEvening() && faveTime.getHour() > 9)
    {
        cout<<"You're a night owl!"<<endl;
    }
    
    return 0;
}