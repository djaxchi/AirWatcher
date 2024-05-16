#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <readCSV.h>

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

class readCSV {
public:
    map<string, Sensor> ReadSensors(const string& filename) {
        map<string, Sensor> sensors;
        ifstream file(filename);
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string sensorID;
            char delimiter;
            double latitude, longitude;
            iss >> sensorID >> delimiter >> latitude >> delimiter >> longitude;
            sensors[sensorID] = {latitude, longitude};
        }
        return sensors;
    }

    map<string, Measurement> ReadMeasurements(const string& filename) {
        map<string, Measurement> measurements;
        ifstream file(filename);
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string timestamp, sensorID, attributeID;
            char delimiter;
            double value;
            iss >> timestamp >> delimiter >> sensorID >> delimiter >> attributeID >> delimiter >> value;
            measurements[timestamp] =  {sensorID, attributeID, value};
        }
        return measurements;
    }

    map<string, Attribute> ReadAttributes(const string& filename) {
        map<string, Attribute> attributes;
        ifstream file(filename);
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string attributeID, unit, description;
            char delimiter;
            iss >> attributeID >> delimiter >> unit >> delimiter >> description;
            attributes[attributeID] = {unit, description};
        }
        return attributes;
    }
};
