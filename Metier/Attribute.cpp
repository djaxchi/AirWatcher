#include <string>
using namespace std;

#include "Attribute.h"

string Attribute::GetId()
{
    return id;
}

string Attribute::GetUnit()
{
    return unit;
}

string Attribute::GetDescription()
{
    return description;
}

Attribute::Attribute(string my_id, string my_unit , string my_description)
{
    id = my_id;
    unit = my_unit;
    description = my_description;
}

Attribute::~Attribute()
{}
