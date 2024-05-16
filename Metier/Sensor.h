
#ifndef SENSOR_H 
#define SENSOR_H

#include <string>
#include <list>
using namespace std;

#include "Measurement.h"

class Sensor
{
public :
    string GetId();
    double GetLatitude();
    double GetLongitude();
    list<Measurement> GetMeasurements();

    void AddMeasurement(Measurement my_measurement);

    void Show();

    Sensor(string my_id, double my_latitude,double my_longitude);
    Sensor();
    ~Sensor();

protected :
    string id;
    double latitude;
    double longitude;
    list<Measurement> measurements;

};

#endif 
