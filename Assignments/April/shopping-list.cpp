/*
Shopping List
Justin Wilson
4/27/2020

User enters as many items as they want, when user has completed entering all of the items
they enter a "*" character to indicate they are done.

After the "*" character has been entered, the complete list of items should be printed
to the terminal. 


*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string input;

    cout << "Enter in your shopping list.  Enter in * to indicate you are done" << endl;

    vector <string> shoppingList;
    while (input != "*")
        {
            cin >> input;
            shoppingList.push_back(input);
        }

    if (input == "*")
    {
        for (int i = 0 ; i < (shoppingList.size() -1);i++)
            cout << shoppingList[i] << " " <<endl ;
    }

    return 0;
}