#pragma once

#include <string>

class ResortReview
{
private:
  int _stars;
  std::string _review_body;
public:

  ResortReview():
    _stars(0), _review_body("-") {};

  ResortReview(int stars, std::string body):
    _stars(stars), _review_body(body) {};

  int get_stars()
  {
    return _stars;
  }

  std::string get_review()
  {
    return _review_body;
  }
};
