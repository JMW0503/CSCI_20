/*
Cubic Objects
Author: Justin Wilson
Date Created: 2/12/2020
Description: Asks user to input the dimensions for two cubs. After the user has entered
all of the dimensions, the program will display the volume of each cube.
*/




#include <iostream>
using namespace std;

struct Cube
{
    int length;
    int width;
    int height;
};

int main()
{
    Cube cube1;

    cout<<"Cube 1: "<<endl;
    
    cout<<"Enter the length: "<<endl;
    cin>>cube1.length;

    cout<<"Enter the width: "<<endl;
    cin>>cube1.width;

    cout<<"Enter the height: "<<endl;
    cin>>cube1.height;


    Cube cube2;

    cout<<endl<<"Cube 2: "<<endl;
    
    cout<<"Enter the length: "<<endl;
    cin>>cube2.length;

    cout<<"Enter the width: "<<endl;
    cin>>cube2.width;

    cout<<"Enter the height: "<<endl;
    cin>>cube2.height;

    cout<<endl<<"Cube 1 Volume: "<<cube1.length * cube1.width * cube1.height<<endl;
    cout<<"Cube 2 Volume: "<<cube2.length * cube2.width * cube2.height<<endl;
    

    return 0;
}
