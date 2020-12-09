#pragma once

#include "./hotel_franchise.cpp"
#include "./resort_review.cpp"
#include "./resort_location.cpp"
#include <iostream>

class Resort : public HotelFranchise
{
private:
  ResortReview _review;
  int _current_residents;
  ResortLocation _location;

public:

  Resort():
    _review(ResortReview()), _location(ResortLocation()), _current_residents(0) {};
  
  Resort(ResortLocation location, ResortReview review, int residents):
    _review(review), _location(location), _current_residents(residents) {};
  
  int get_current_residents()
  {
    return _current_residents;
  }
  
  void check_in(int amount_of_people)
  {
    _current_residents += amount_of_people;
  }

  void check_out(int amount_of_people)
  {
    _current_residents -= amount_of_people;
  }

  ResortLocation get_location()
  {
    return _location;
  }

  ResortReview get_review()
  {
    return _review;
  }

  friend std::ostream& operator<< (std::ostream& os, Resort& r)
  {
    os << "Resort printout: \n"
      << "Resort            : " << r._name << "\n"
      << "Stars             : " << r._review.get_stars() << "\n"
      << "Current occupants : " << r._current_residents << "\n"
      << "City              : " << r._location.get_city() << "\n"
      << "Counry            : " << r._location.get_country() << "\n"
      << "Review            : " << r._review.get_review() << "\n";
    return os;
  }

  friend std::istream& operator>> (std::istream& is, Resort& r)
  {
    std::string name;
    int stars; 
    int occupants;
    std::string city;
    std::string country;
    std::string review;
    std::cout << "Resort input: \n";
    std::cout << "Resort            : "; 
      is >> name;
    std::cout << "Stars             : ";
      is >> stars;
    std::cout << "Current occupants : ";
      is >> occupants;
    std::cout << "City              : ";
      is >> city;
    std::cout << "Counry            : ";
      is >> country;
    std::cout << "Review            : ";
      is >> review;
    
    r._review = ResortReview(stars, review);
    r._location = ResortLocation(city, country);
    r._current_residents = occupants;
    r._name = name;
    return is;
  }
};
