#include <iostream>
using namespace std;

//Object definition
struct Burrito
{
    char protein;
    char rice;
    char beans;
    bool spicy;
    int numOfToppings;
    float cost;
};

int main()
{
    //Object instantiation
    Burrito burrito1;

    burrito1.protein = 'S';
    burrito1.rice = 'W';
    burrito1.beans = 'B';
    burrito1.numOfToppings = 5;
    burrito1.cost = 9.99;

    Burrito burrito2;

    burrito2.protein = 'C';
    burrito2.rice = 'B';
    burrito2.beans = 'P';
    burrito2.numOfToppings = 2;
    burrito2.cost = 7.99;

    cout<<"Burrito 1: "<<endl<<endl;
    cout<<"The protein: "<<burrito1.protein<<endl;
    cout<<"The rice: "<<burrito1.rice<<endl;
    cout<<"The beans: "<<burrito1.beans<<endl;
    cout<<"The number of toppings"<<burrito1.numOfToppings<<endl;
    cout<<"The total: "<<burrito1.cost<<endl;

    cout<<"Burrito 2: "<<endl<<endl;
    cout<<"The protein: "<<burrito2.protein<<endl;
    cout<<"The rice: "<<burrito2.rice<<endl;
    cout<<"The beans: "<<burrito2.beans<<endl;
    cout<<"The number of toppings"<<burrito2.numOfToppings<<endl;
    cout<<"The total: "<<burrito2.cost<<endl;



}