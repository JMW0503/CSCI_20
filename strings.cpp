
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int faveInt;
    string myString;

    cout<<"Enter your favorite integer "<<endl;
    cin>>faveInt;


    cin.ignore();


    cout<<"Enter your full name"<<endl;
    //cin>>myString;
    getline(cin, myString);

    string other;
    getline(cin, other);

    cout<<"Your name is "<<myString<<endl;
    cout<<"Your favorite integer is"<<faveInt<<endl;
    cout<<"Other: "<<other<<endl;
    
    return 0;

}

/*
#include <iostream>
using namespace std;

int main()
{
    int x = 101;
    
    if (x < 100) //&& 1 <2)
    {
    cout<<"Less than 100"<<endl;

    }
    else if (x < 200)
    
    {

    }
    else
    {
        cout<<"The if didn't work";
    }
    


    return 0;
}
*/