#include "Time.h"
#include <iostream>

using namespace std;



    Time::Time(int h, int m, bool pm) 
        : _hour(h), _minute(m), _evening(pm) 
    {
    }

    int Time::getHour()
    {
        return _hour;
    }

    
    int Time::getMinute()
    {
        return _minute;
    }

    bool Time::isEvening()
    {
        return _evening;
    }

    void Time::display()
    {
        cout << _hour << ':' << _minute << " ";
        if (_evening)
        {
            cout << "PM" << endl;
        }
        else
        {
            cout << "AM" << endl;
        }
    }
