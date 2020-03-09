/*************************************************************
[PROGRAM NAME]
Author: [YOUR NAME]
Date Created: [DATE]
Description: [PROGRAM DESCRIPTION]
*************************************************************/

#include <iostream>
using namespace std;



int main()
{

    WebCounter wc(42);

    cout<<"Web Counter Tester:"<<endl<<endl;
    cout<<"Start: "<<wc.get()<<endl;
    
    wc.hit();
    wc.hit();
    
    cout<<"Two Hits: "<<wc.get()<<endl;

    wc.hit();
    
    cout<<"Three Hits: "<<wc.get()<<endl;

    wc.reset();

    cout<<"Reset: "<<wc.get()<<endl;


    wc.hit();
    wc.hit();
    wc.hit();
    wc.hit();

    cout<<"Four Hits: "<<wc.get()<<endl;

    return 0;
}