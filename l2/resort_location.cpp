#pragma once
#include <string>

class ResortLocation
{
private:
  std::string _country;
  std::string _city;
public:

  ResortLocation():
    _country(""), _city("") {};

  ResortLocation(std::string country, std::string city):
    _country(country), _city(city) {};

  std::string get_country()
  {
    return _country;
  }

  std::string get_city()
  {
    return _city;
  }
};
