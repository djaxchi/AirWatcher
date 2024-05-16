#include <iostream>
#include "readCSV.h"

int main() {
    // Assuming your CSV files are located in a folder named "dataset"
    string folderName = "dataset/";

    // Create an instance of ReadCSV
    ReadCSV reader(folderName);

    // Set paths for each CSV file
    reader.SetMeasurementsCSV(folderName + "measurements.csv");
    reader.SetSensorsCSV(folderName + "sensors.csv");
    reader.SetCleanersCSV(folderName + "cleaners.csv");
    reader.SetUsersCSV(folderName + "users.csv");
    reader.SetProvidersCSV(folderName + "providers.csv");
    reader.SetAttributesCSV(folderName + "attributes.csv");

    // Read data from CSV files
    list<Measurement> measurements = reader.ReadMeasurements();
    map<string, Sensor> sensors = reader.ReadSensors();
    map<string, Cleaner> cleaners = reader.ReadCleaners();
    map<string, User> users = reader.ReadUsers();
    map<string, Provider> providers = reader.ReadProviders();
    map<string, Attribute> attributes = reader.ReadAttributes();


    // Display some of the data read from CSV files

    cout << "Measurements:" << endl;

    for (auto &measurement : measurements) {
        measurement.Show();
    }
    
    cout << "Sensors:" << endl;

    for (auto &sensor : sensors) {
        sensor.second.Show();
    }

    cout << "Cleaners:" << endl;

    for (auto &cleaner : cleaners) {
        cleaner.second.Show();
    }
    cout << "Users:" << endl;

    for (auto &user : users) {
        user.second.Show();
    }
    
    
    
    return 0;
}