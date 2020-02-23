#include <iostream>
using namespace std;



struct myStruct
{
    int x;
};

myStruct getMyStruct()
{
    myStruct ms;
    
    ms.x = 7;

    return ms;
}


void sayHello()//Function definition
{
    cout<<"Hello"<<endl;
}



//Definition
int maxNumber(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int GetBiggestNumberFromUser()
{
    int theFirstNumber;
    cout<<"Enter a number, please ";
    cin>>theFirstNumber;

    int theSecondNumber;
    cout<<"Enter a number, please ";
    cin>>theSecondNumber;
    
    
    return maxNumber(theFirstNumber, theSecondNumber)
 
}

int main()
{
    sayHello();

    int biggestNumber = GetBiggestNumberFromUser()

    biggestNumber = GetBiggestNumberFromUser();

    cout<<"The biggest number is "<<GetBiggestNumberFromUser()<<endl;



    maxNumber(99, 100);
    maxNumber(12, 888888);


    return 0;
}