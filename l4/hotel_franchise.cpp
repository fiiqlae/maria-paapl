#pragma once
#include <string>

class HotelFranchise
{
protected:
  std::string _name;
  int _rating;
public:
  HotelFranchise(std::string franchise_name, int franchise_rating):
    _name(franchise_name), _rating(franchise_rating) {};
  
  HotelFranchise():
    _name("undefined"), _rating(0) {};
  
  void change_name(std::string new_name)
  {
    _name = new_name;
  }

  void set_rating(int rating)
  {
     _rating = rating;
  }
};
