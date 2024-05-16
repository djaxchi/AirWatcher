
#if ! defined (PROVIDER_H )
#define PROVIDER_H

#include <string>
#include <list>
using namespace std;

class Provider 
{
public :
    string GetId();
    list<string> GetCleaners();
    void AddCleanerId(string my_cleaner);

    Provider(string my_id, string my_cleaner);
    ~Provider();

protected : 
    string id;
    list<string> cleaners;
};

#endif 