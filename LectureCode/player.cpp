/**********************************************************************
player.cpp
Author: Matt
Date Created: 03/04/2020
Description: [PROGRAM DESCRIPTION]
**********************************************************************/

#include <iostream>
using namespace std;

// definition of Player data type
class Player
{
    private: // access specifier

    // member variables
    string name;
    int health;
    int armorRating;
    string weapon;


    public: // access specifier

    // constructor
    Player(string n, int h, int ar, string w) 
        : name(n), health(h), armorRating(ar), weapon(w) // initialization list
    {
    }

    Player(string n, int h, int ar)
        : name(n), health(h), armorRating(ar), weapon("Cheese") // initialization list
    {
        
    }

    //Name getter
    string getName()
    {
        return name;
    }

    //Name setter
    void setName(string newName)
    {
        if (newName == "Matt 2")
        {
            cout<<"no"<<endl;
            name = "Not Matt";
        }
        else
        {
            name = newName;
        }
        
    }






    void takeDamage(int theDamage)
    {
        health -= theDamage;

        if (health <= 0)
        {
            cout<<"You're Dead!"<<endl;
        }
    }
};



Player ChangePlayerName(Player paramPlayer)
{
    string newName;
    cout<<"Enter a better name, please: ";
    getline(cin, newName);


    paramPlayer.setName(newName);

    return paramPlayer;
}



int main()
{
    // Instantiate Player object
    Player thePlayer("Matt", 42, 42, "Mouse");

    Player weaponlessPlayer("Bob", 100, 4);

    //thePlayer.takeDamage(42);


    cout<<thePlayer.getName()<<endl;


    thePlayer = ChangePlayerName(thePlayer);

    cout<<thePlayer.getName()<<endl;



    

    return 0;
}