
#ifndef MEASUREMENT_H 
#define MEASUREMENT_H

#include <string>
using namespace std;

#include "Date.h"
class Measurement 
{
public :
    string GetSensorId();
    Date GetTime();
    string GetAttribute();
    double GetValue();

    void Show();
    Measurement(Date my_time, string my_sensorId, string my_attribute, double my_value);
    ~Measurement();

protected : 
    Date time;
    string sensorId;
    string attribute;
    double value;
};


#endif 