
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "User.h"

string User::GetId()
{
    return id;
}

int User::GetNbOfPoints()
{
    return nbOfPoints;
}

list<string> User::GetSensors()
{
    return sensors;
}

void User::AddSensorId(string my_sensor)
{
  sensors.push_back(my_sensor);
}

void User::AddPoints(int points)
{
    nbOfPoints += points;
}

void User::Show()
{
    cout << "*******User : ******************" << id << endl;
    cout << "    -> Nb de points : " << nbOfPoints << " <-" << endl;
    cout << "Capteurs : " << endl;
    list<string>::iterator sensor = sensors.begin();
    while(sensor != sensors.end())
    {
        cout << "     -  " << *sensor;
        cout << endl;
        sensor ++;
    }
    cout << "****************************************" << endl;
}
User::User(string my_id, string my_sensor)
{
    id=my_id;
    sensors.push_back(my_sensor);
    nbOfPoints=0;
}

User::~User()
{}
