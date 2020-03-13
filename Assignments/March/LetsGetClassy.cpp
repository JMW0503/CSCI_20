/*
Lets Get Classy
Justin Wilson
3/6/2020

create three (3) "Combo" objects and display their contents to the terminal. The program defines a "Combo" class to hold the following information:

Entree name
Side name
Price (floating-point number)
All of the member variables of the Combo class are private. Three Combo objects are instantiated and initialized with the 
combo information.

After all Combo objects have been instantiated and initialized with the appropriate values, the program displays the contents
of each object using a member function defined on the Combo class.
*/
#include <iostream>
using namespace std;

class Combo
{  
    private:
    string Entree;
    string SideName;
    float Price;

    public:

    Combo(string E, string SN, float P)
        :Entree(E), SideName(SN), Price(P)
        {}
    
    

    void display(int ComboNum)
    {
        cout<<"Combo Number "<<ComboNum<<":"<<endl;
        cout<<"Entree: "<<Entree<<endl;
        cout<<"Side: "<<SideName<<endl;
        cout<<"Price: $"<<Price<<endl;
        cout<<endl;
    }
};

int main()
{
    Combo combo1("Hamburger", "Fries", 5.99);
    combo1.display(1);

    Combo combo2("Burrito", "Rice", 4.99);
    combo2.display(2);

    Combo combo3("Salad", "Breadstics", 4.49);
    combo3.display(3);


    return 0;
}
