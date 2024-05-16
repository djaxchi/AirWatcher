#ifndef READCSV_H
#define READCSV_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include "Metier/Date.h"
#include "Metier/Attribute.h"
#include "Metier/Provider.h"
#include "Metier/Cleaner.h"
#include "Metier/User.h"
#include "Metier/Measurement.h"
#include "Metier/Sensor.h"

using namespace std;

class ReadCSV
{
public:
    ReadCSV(string folderName);
    virtual ~ReadCSV();

    void SetMeasurementsCSV(string fileCSV);
    void SetSensorsCSV(string fileCSV);
    void SetCleanersCSV(string fileCSV);
    void SetUsersCSV(string fileCSV);
    void SetProvidersCSV(string fileCSV);
    void SetAttributesCSV(string fileCSV);

    list<Measurement> ReadMeasurements();
    map<string, Sensor> ReadSensors();
    map<string, Cleaner> ReadCleaners();
    map<string, User> ReadUsers();
    map<string, Provider> ReadProviders();
    map<string, Attribute> ReadAttributes();

private:
    ifstream measurementsCSV;
    ifstream sensorsCSV;
    ifstream cleanersCSV;
    ifstream usersCSV;
    ifstream providersCSV;
    ifstream attributesCSV;

    vector<string> split(const string &line, char delimiter);
    vector<vector<string>> readCSV(ifstream &fileStream);
};

#endif // READCSV_H
