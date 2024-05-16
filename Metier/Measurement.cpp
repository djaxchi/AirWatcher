
#include <iostream>
#include <string>
using namespace std;

#include "Measurement.h"

string Measurement::GetSensorId()
{
    return sensorId;
}
Date Measurement::GetTime()
{
    return time;
}

string Measurement::GetAttribute()
{
    return attribute;
}

double Measurement::GetValue()
{
    return value;
}

void Measurement::Show()
{
    time.Show();
    cout << ";" << sensorId << ";" << attribute << ";" << value << ";";
}

Measurement::Measurement(Date my_time, string my_sensorId, string my_attribute, double my_value)
{
    time=my_time;
    sensorId=my_sensorId;
    attribute=my_attribute;
    value=my_value;
}

Measurement::~Measurement() 
{} 