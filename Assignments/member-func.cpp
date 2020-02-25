/*
Member Function
Justin Wilson
2/24/2020

(3) "Combo" objects and display their contents to the terminal, defines a "Combo" struct to hold the following information:

Entree name
Side name
Price (floating-point number)
Three Combo objects must be instantiated and initialized with the following information:

Combo Instance	Entree Name	Side Name	Price
1	Hamburger	Fries	5.99
2	Burrito	Rice	4.99
3	Salad	Breadsticks	4.49

After all Combo objects have been instantiated and initialized with the appropriate values, 
the program should display the contents of each object using a member function defined on the Combo struct.

*/
#include <iostream>
using namespace std;


struct Combo
    {
       string Entree;
       string Side;
       float Price;

       void display(int ComboNum)
       {
           cout<<"Combo Number "<<ComboNum<<":"<<endl;
           cout<<"Entree: "<<Entree<<endl;
           cout<<"Side: "<<Side<<endl;
           cout<<"Price: "<<Price<<endl<<endl;
       }
    };




int main()
{
    Combo Combo1;

    Combo1.Entree = "Hamburger";
    Combo1.Side = "Fries";
    Combo1.Price = 5.99;

    
    
    Combo Combo2;

    Combo2.Entree = "Burrito";
    Combo2.Side = "Rice";
    Combo2.Price = 4.99;


    Combo Combo3;

    Combo3.Entree = "Salad";
    Combo3.Side = "Breadsticks";
    Combo3.Price = 4.49;

    Combo1.display(1);
    Combo2.display(2);
    Combo3.display(3);
    

    return 0;
}