
#if ! defined ( readCSV_H )
#define readCSV_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

struct Sensor {
    double latitude;
    double longitude;
};

struct Measurement {
    string sensorID;
    string attributeID;
    double value;
};

struct Attribute {
    string unit;
    string description;
};

class ReadCSV {
public:
    map<string, Sensor> ReadSensors(const string& filename);
    map<string, Measurement> ReadMeasurements(const string& filename);
    map<string, Attribute> ReadAttributes(const string& filename);
};

#endif // ReadCSV_H