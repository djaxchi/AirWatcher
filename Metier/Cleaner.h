
#if ! defined (CLEANER_H )
#define CLEANER__H

#include <string>
using namespace std;

#include "Date.h"
#include "Provider.h"


class Cleaner
{
public :
    string GetId();
    Date GetStartTime();
    Date GetEndTime();
    double GetLatitude();
    double GetLongitude();
    string GetProvider();

    void SetProvider(Provider my_provider);

    void Show();
    Cleaner(string my_id, double my_latitude, double my_longitude, Date my_startTime, Date my_endTime);
    ~Cleaner();

protected :
  string id;
  Date startTime;
  Date endTime;
  double latitude;
  double longitude;
  string provider;
};

#endif
