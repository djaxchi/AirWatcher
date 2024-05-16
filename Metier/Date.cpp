#include <string>
#include <iostream> 
using namespace std;

#include "Date.h"

int Date::GetYear()
{
    return year;
}

int Date::GetMonth()
{
    return month;
}

int Date::GetDay()
{
    return day;
}

int Date::GetHour()
{
    return hour;
}

int Date::GetMinute()
{
    return minute;
}

int Date::GetSecond()
{
    return second;
}

void Date::Show()
{
    cout << year << "-" << month << "-" << day << " " << hour << ":" << minute << ":" << second;    
}

bool Date::operator <=(const Date & date)
{
    if(year > date.year) return false;
    else if(year == date.year)
    {
        if(month > date.month) return false;
        else if(month == date.month)
        {
            if(day > date.day) return false;
            else if(day == date.day)
            {
                if(hour > date.hour) return false;
                else if(hour == date.hour)
                {
                    if(minute > date.minute) return false;
                    else if(minute == date.minute)
                    {
                        if(second > date.second) return false;
                        return true;
                    }
                    return true;
                }
                return true;
            }
            return true;
        }
        return true;
    }
    return true;
}

bool Date::operator >=(const Date & date)
{
    if(year < date.year) return false;
    else if(year == date.year)
    {
        if(month < date.month) return false;
        else if(month == date.month)
        {
            if(day < date.day) return false;
            else if(day == date.day)
            {
                if(hour < date.hour) return false;
                else if(hour == date.hour)
                {
                    if(minute < date.minute) return false;
                    else if(minute == date.minute)
                    {
                        if(second < date.second) return false;
                        return true;
                    }
                    return true;
                }
                return true;
            }
            return true;
        }
        return true;
    }
    return true;
} 


Date::Date()
{
    year = 0;
    month = 0;
    day = 0;
    hour = 0;
    minute = 0;
    second = 0;
} 

Date::Date(string dateString)
{
    year=stoi(dateString.substr(0,4));
    month=stoi(dateString.substr(5,2));
    day=stoi(dateString.substr(8,2));
    hour=stoi(dateString.substr(11,2));
    minute=stoi(dateString.substr(14,2));
    second=stoi(dateString.substr(17,2)); 
} 

Date::~Date()
{}
