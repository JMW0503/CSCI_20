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
        :Entree (E), SideName(SN), Price(P)
        {}
    
    string getEntree()
    {
        return Entree;
    }

    string getSideName()
    {
        return SideName;
    }

    float getPrice()
    {
        return Price;
    }


    void display(int ComboNum)
    {
        cout<<"Combo "<<ComboNum<<":"<<endl;
        cout<<"Entree: "<<Entree<<endl;
        cout<<"Side: "<<SideName<<endl;
        cout<<"Price: $"<<Price<<endl;
        cout<<endl;
    }

    
    void sizeMenu()
    {
        cout<<"Size upgrade prices: Small $0, Medium $2, Large $3"<<endl;
        string sizePrompt;
        sizePrompt = "What size would you like? (1 = Small, 2 = Medium, 3 = Large";
        cout<<sizePrompt<<endl;

        int sizeChoice;

        if (sizeChoice == 1)
        {
            
        }

        if (sizeChoice == 2)
        {

        }
        if (sizeChoice == 3)
        {

        }
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

    int comboMenu();
    {
        string comboPrompt;
        comboPrompt = "Please select your combo number: ";
        
        string comboChoice;
        comboChoice = "";

        if (comboChoice == "1")
        {
            return combo1.display;
        }

        if (comboChoice == "2")
        {
            return combo2.display;
        }

        if (comboChoice == "3")
        {
            return combo3.display;
        }

        string entreeChoice;
        string sideChoice;
        entreeChoice = "Enter Entree: ";
        sideChoice = "Enter Side:";


        if (comboChoice == "4")
        {
            cin>>entreeChoice;
            cout<<endl;
            cin>>sideChoice;
            cout<<endl;

        }
    }

int drinkMenu();
{
    string drinkChoice;
    drinkChoice = "What would you like to drink? Leave blank to keep code as default (Coke)";
    cin>>drinkChoice;
    string defaultDrink;
    defaultDrink = "Coke";

    if (drinkChoice == "")
    {
        cout<<defaultDrink;
    }


}




    return 0;


}