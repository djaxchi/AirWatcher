#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <string>
using namespace std;

class Attribute 
{
public:
    string GetId();
    string GetUnit();
    string GetDescription();

    Attribute(string my_id, string my_unit, string my_description);
    ~Attribute();

protected:
    string id;
    string unit;
    string description;
};

#endif // ATTRIBUTE_H
