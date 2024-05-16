#include <iostream>
#include <string>
using namespace std;

#include "Cleaner.h"

string Cleaner::GetId()
{
    return id;
}

Date Cleaner::GetStartTime()
{
    return startTime;
}

Date Cleaner::GetEndTime()
{
    return endTime;
}

double Cleaner::GetLatitude()
{
    return latitude;
}

double Cleaner::GetLongitude()
{
    return longitude;
}

string Cleaner::GetProvider()
{
    return provider;
}

void Cleaner::SetProvider(Provider my_provider)
{
    provider = my_provider.GetId();
}

void Cleaner::Show()
{
    cout << id << ";" << latitude << ";" << longitude << ";";
    startTime.Show();
    cout << ";";
    endTime.Show();
    cout << ";" << provider << ";";
}

Cleaner::Cleaner(string my_id, double my_latitude, double my_longitude, Date my_startTime, Date my_endTime)
{
    id = my_id;
    startTime = my_startTime;
    endTime = my_endTime;
    latitude = my_latitude;
    longitude = my_longitude;
}

Cleaner::~Cleaner()
{}
