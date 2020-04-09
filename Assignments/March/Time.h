#ifndef TIME_H
#define TIME_H

class Time 
{
    private:
    
    int _hour;
    int _minute;
    bool _evening;

    public:

    Time(int h, int m, bool pm);

    // getter
    int getHour();

    // getter
    int getMinute();

    // getter
    bool isEvening();

    // Display the time
    void display();

};

#endif