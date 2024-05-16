
#include <string>
#include <list>
using namespace std;

#include "Provider.h"

string Provider::GetId()
{
    return id;
}

list<string> Provider::GetCleaners()
{
    return cleaners;
}

void Provider::AddCleanerId(string my_cleaner)
{
    cleaners.push_back(my_cleaner);
}

Provider::Provider(string my_id)
{
    id=my_id;
}

Provider::~Provider()
{}
