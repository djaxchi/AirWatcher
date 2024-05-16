#if ! defined (DATE_H )
#define DATE_H

#include <string>
using namespace std;

class Date 
{
public :
    int GetYear();
    int GetMonth();
    int GetDay();
    int GetHour();
    int GetMinute();
    int GetSecond();

    void Show();
    
    bool operator <=(const Date & date);
    bool operator >=(const Date & date);

    Date();
    Date(string dateString);
    ~Date();

protected : 

    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
};

#endif 