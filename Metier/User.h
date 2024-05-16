
#if ! defined (USER_H )
#define USER_H

#include <string>
#include <list>
using namespace std;

#include "Sensor.h"


class User
{
public :
    string GetId();
    int GetNbOfPoints();
    list<string> GetSensors();

    void AddSensorId(string my_sensor);
    void AddPoints(int points);

    void Show();

    User(string my_id, string my_sensor);
    ~User();

protected :
    string id;
    int nbOfPoints;
    list<string> sensors;

};


#endif 
