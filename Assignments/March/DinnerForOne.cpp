/*
Dinner For One
Justin Wilson
3/12/2020

Program has:

    *Combo class

    *Combo class constructor using initialization list

    *Combo class member function to display combo information

    *Function to prompt and select combo option

    *Function to prompt and update combo size and drink


*/
#include <iostream>
using namespace std;

class combo
    {
        private:
        string Entree;
        string Side;
        string Drink;
        string comboSize;
        float Price;

        public:
    combo(string e, string s, float p) 
    : Entree(e),Side(s),Price(p)
        {}

    void setComboSize(string size)
        {
            comboSize = size;
        }
    void setDrink(string liquid)
        {
            Drink = liquid;
        }
    void setPrice(float money)
        {
            Price = money;
        }
    float getPrice()
        {
            return Price;
        }
    void chooseComboSize()
        {
            int size;

            cout << "Size upgrade prices: Small = $0, Medium =  $2, Large = $3"<<endl;

            cout << "What size would you like? (1 = Small, 2 = Medium, 3 = Large) ";
            cin >> size;
            cout << endl;

            if (size == 1)
            {
                Price = getPrice();
                setPrice(Price += 0);
                setComboSize("Small");
            }
            if (size == 2)
            {
                setPrice(Price += 2);
                setComboSize("Medium");
            }
            if (size == 3)
            {
                setPrice(Price += 3);
                setComboSize("Large");
            }
        }
        void display(int ComboNum)
        {
            cout << "Combo " << ComboNum << ":" << endl;

            cout << "Entree: " << Entree << endl;

            cout << "Side: " << Side << endl;

            cout << "Price: $" << Price << endl;
            
            cout << endl;
        }
        void drinkMenu()
        {
            string drinkChoice;
            cout << "what would you like to Drink? (leave blank to keep Coke as default) ";
            cin >> drinkChoice;
            cout << endl;

            string defaultDrink;
            defaultDrink = "Coke";

            if (drinkChoice.empty())
            {
                setDrink(defaultDrink);
            }
            else
            {
                setDrink(drinkChoice);
            }
        }
        void displayAll()
        {
            cout << "Here is your order: " << endl;
            
            cout << "Entree: ";
            cout << Entree << endl;

            cout << "Side: ";
            cout << Side << endl;

            cout << "Drink ";
            cout << Drink << endl;

            cout << "Size: ";
            cout << comboSize << endl;

            cout << "Price: ";
            cout << Price << endl;
            cout << endl;
        }
    };

combo customCombo()
    {
        string Entree;
        string Side;
        float Price;

        cin.ignore();

        cout << "Enter Entree: ";
        getline(cin, Entree);
        
        cout << "Enter Side: ";
        getline(cin, Side);
        
        Price = 6.99;

        return combo(Entree, Side, Price);
    }
combo comboMenu()
    { 
        combo combo1("Hamburger", "Fries", 5.99);
        combo combo2("Burrito", "Rice", 4.99);
        combo combo3("Salad", "Breadsticks", 4.99);
        combo combo4( "Custom Order", "Custom Order", 6.99);

        combo1.display(1);
        combo2.display(2);
        combo3.display(3);
        combo4.display(4);

        int input;
        cout << "Please select your order number: ";
        cin >> input;
        cout << endl;
        
        if (input == 1)
        {
            cin.ignore();
            return combo1;
        }
        if (input == 2)
        {
            cin.ignore();
            return combo2;
        }
        if (input == 3)
        {
            cin.ignore();
            return combo3;
        }
        if (input == 4)
        {
            combo combo4 = customCombo();
            return combo4;
        }
    }
    
int main()
{
   
    combo mealChoice = comboMenu();
    mealChoice.drinkMenu();
    mealChoice.chooseComboSize();
    mealChoice.displayAll();

   return 0;
}
