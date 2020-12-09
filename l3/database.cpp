#include "./resort.cpp"
#include <deque>
#include <iostream>

class DB
{
private:
  std::deque<Resort> _resorts;
  int _current_id;
public:
  
  DB(): _current_id(0) {};

  void add()
  {
    Resort r;
    std::cin >> r;
    _resorts.push_back(r);
  }

  void pop_front()
  {
    _resorts.pop_front();
  }

  void print_all()
  {
    for (auto i = _resorts.begin(); i != _resorts.end(); ++i)
    {
      std::cout << *i;
    }
  }

};
