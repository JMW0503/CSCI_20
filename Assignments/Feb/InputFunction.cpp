/*
Input Function
Justin Wilson
2/23/2020

Defines CalendarDate struct
Defines input function
invokes input function
*/


#include <iostream>
using namespace std;


struct CalendarDate
{
string Date;
string Month;
string Year;
};

int main()
{
CalendarDate CalendarDate1 = {};

cout<<"Date 1: "<<endl;
cout<<"Enter Date: "<<CalendarDate1.Date;
cin>>CalendarDate1.Date;
cout<<"Enter Month: "<<CalendarDate1.Month;
cin>>CalendarDate1.Month;
cout<<"Enter Year: "<< CalendarDate1.Year;
cin>>CalendarDate1.Year;
cout<<endl;

CalendarDate CalendarDate2 = {};

cout<<"Date 2: "<<endl;
cout<<"Enter Date: "<<CalendarDate2.Date;
cin>>CalendarDate2.Date;
cout<<"Enter Month: "<<CalendarDate2.Month;
cin>>CalendarDate2.Month;
cout<<"Enter Year: "<< CalendarDate2.Year;
cin>>CalendarDate2.Year;
cout<<endl;

CalendarDate CalendarDate3 = {};

cout<<"Date 3: "<<endl;
cout<<"Enter Date: "<<CalendarDate3.Date;
cin>>CalendarDate3.Date;
cout<<"Enter Month: "<<CalendarDate3.Month;
cin>>CalendarDate3.Month;
cout<<"Enter Year: "<< CalendarDate3.Year;
cin>>CalendarDate3.Year;


}