#include "ReadCSV.h"

ReadCSV::ReadCSV(string folderName) {}

ReadCSV::~ReadCSV() {
    if (measurementsCSV.is_open()) measurementsCSV.close();
    if (sensorsCSV.is_open()) sensorsCSV.close();
    if (cleanersCSV.is_open()) cleanersCSV.close();
    if (usersCSV.is_open()) usersCSV.close();
    if (providersCSV.is_open()) providersCSV.close();
    if (attributesCSV.is_open()) attributesCSV.close();
}

void ReadCSV::SetMeasurementsCSV(string fileCSV) {
    measurementsCSV.open(fileCSV);
}

void ReadCSV::SetSensorsCSV(string fileCSV) {
    sensorsCSV.open(fileCSV);
}

void ReadCSV::SetCleanersCSV(string fileCSV) {
    cleanersCSV.open(fileCSV);
}

void ReadCSV::SetUsersCSV(string fileCSV) {
    usersCSV.open(fileCSV);
}

void ReadCSV::SetProvidersCSV(string fileCSV) {
    providersCSV.open(fileCSV);
}

void ReadCSV::SetAttributesCSV(string fileCSV) {
    attributesCSV.open(fileCSV);
}

list<Measurement> ReadCSV::ReadMeasurements() {
    list<Measurement> measurements;
    vector<vector<string>> data = readCSV(measurementsCSV);
    for (const auto &row : data) {
        if (row.size() >= 4) {
            double value;
            value = stod(row[3]); 
            measurements.emplace_back(row[0], row[1], row[2], value);
        }
    }
    return measurements;
}

map<string, Sensor> ReadCSV::ReadSensors() {
    map<string, Sensor> sensors;
    vector<vector<string>> data = readCSV(sensorsCSV);
    for (const auto &row : data) {
        if (row.size() >= 4) {
            double latitude = stod(row[1]); // Convert string to double
            double longitude = stod(row[2]); // Convert string to double
            string id;
            id = row[0];
            sensors.insert(make_pair(id,Sensor(id,latitude,longitude)));
        }
    }
    return sensors;
}

map<string, Cleaner> ReadCSV::ReadCleaners() {
    map<string, Cleaner> cleaners;
    vector<vector<string>> data = readCSV(cleanersCSV);
    for (const auto &row : data) {
        if (row.size() >= 5) {
            string id;
            id = row[0];
            double latitude = stod(row[1]); // Convert string to double
            double longitude = stod(row[2]); // Convert string to double
            Date startTime(row[3]);
            Date endTime(row[4]);
            cleaners.insert(make_pair(id,Cleaner(id,latitude,longitude,startTime,endTime)));
        }
    }
    return cleaners;
}

map<string, User> ReadCSV::ReadUsers() {
    map<string, User> users;
    vector<vector<string>> data = readCSV(usersCSV);
    for (const auto &row : data) {
        if (row.size() >= 2) {
            string id;
            id = row[0];
            User user(id,row[1]);
            users.insert(make_pair(id,user));
        }
    }
    return users;
}

map<string, Provider> ReadCSV::ReadProviders() {
    map<string, Provider> providers;
    vector<vector<string>> data = readCSV(providersCSV);
    for (const auto &row : data) {
        if (row.size() >= 2) {
            string id;
            id = row[0];
            Provider provider(id,row[1]);
            providers.insert(make_pair(id,provider));
        }
    }
    return providers;
}

map<string, Attribute> ReadCSV::ReadAttributes() {
    map<string, Attribute> attributes;
    vector<vector<string>> data = readCSV(attributesCSV);
    for (const auto &row : data) {
        if (row.size() >= 3) {
            string id;
            id = row[0];
            Attribute attribute(id,row[1],row[2]);
            attributes.insert(make_pair(id,attribute));
        }
    }
    return attributes;
}

vector<string> ReadCSV::split(const string &line, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(line);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

vector<vector<string>> ReadCSV::readCSV(ifstream &fileStream) {
    vector<vector<string>> data;
    string line;
    while (getline(fileStream, line)) {
        data.push_back(split(line, ';'));
    }
    return data;
}
