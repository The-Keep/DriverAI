#include "Manager.hpp"
#include <iostream>

Manager::Manager(SonarManager *sonar_m, void *wheel_m)
{
    this->sonar_m = sonar_m;
}

Manager::~Manager() {}