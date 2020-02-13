#include <iostream>
using namespace std;

struct Burrito
{
    char protein;
    char rice;
    char beans;
    int numberOfToppings;
    float cost;
};

int main()
{
    Burrito Burrito1;

    Burrito1.protein = 'S';
    Burrito1.rice = 'W';
    Burrito1.beans = 'B';
    Burrito1.numberOfToppings = 9;
    Burrito1.cost = 9.99;

    Burrito Burrito2;

    Burrito2.protein = ' ';
    Burrito2.rice = ' ';
    Burrito2.beans = ' ';
    Burrito2.numberOfToppings = ;
    Burrito2.cost = ;
    
    


}

/*
int main()
{
    char protein = 'S';
    char rice =  'W';
    char beans = 'B';
    int numOfToppings = 9;
    float cost = 9.99;

    cout<<"Burrito 1:"<<endl<<endl;
    cout<<"THe protein: "<<protein<<endl;
    cout<<"The rice: "<<rice<<endl;
    cout<<"The beans: "<<beans<<endl;
    cout<<"The number of toppings: "<<numOfToppings<<endl;
    cout<<"The total: "<<cost<<endl;

    return 0;
}
*/