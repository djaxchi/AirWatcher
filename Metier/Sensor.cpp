
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "Sensor.h"

string Sensor::GetId()
{
    return id;
}

double Sensor::GetLatitude()
{
    return latitude;
}

double Sensor::GetLongitude()
{
    return longitude;
}

list<Measurement> Sensor::GetMeasurements()
{
    return measurements;
}

void Sensor::AddMeasurement(Measurement my_measurement)
{
  measurements.push_back(my_measurement);
}

void Sensor::Show()
{
    cout << "======== Capteur : " << id << " ========" << endl;
    cout << "    -> Coordonées : " << latitude << ";" << longitude << " <-" << endl;
    cout << "Mesures : " << endl;
    list<Measurement>::iterator measure = measurements.begin();
    while(measure != measurements.end())
    {
        measure->Show();
        cout << endl;
        measure ++;
    }
    cout << "===================================";
}

Sensor::Sensor(string my_id, double my_latitude,double my_longitude)
{
    id=my_id;
    latitude=my_latitude;
    longitude=my_longitude;

}

Sensor::~Sensor()
{} 
