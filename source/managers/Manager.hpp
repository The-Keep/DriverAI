#include "SonarManager.hpp"

class Manager
{
private:
    SonarManager *sonar_m;
    void *wheel_m;

public:
    Manager(SonarManager *sonar_m, void *wheel_m);
    ~Manager();
};