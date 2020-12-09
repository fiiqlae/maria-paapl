#include "./resort.cpp"
#include <vector>
#include <iostream>

class DB
{
private:
  std::vector<Resort> _resorts;
  int _current_id;
public:
  
  DB(): _current_id(0) {};

  void add()
  {
    Resort r;
    std::cin >> r;
    _resorts.push_back(r);
  }

  void update()
  {
    int selection;
    Resort r;
    std::cout << "Enter the ID: ";
    std::cin >> selection;
    r = _resorts[selection];
    std::cout << r;
    std::cin >> r;
    _resorts[selection] = r;
  }
  
  void get()
  {
    int selection;
    Resort r;
    std::cout << "Enter the ID: ";
    std::cin >> selection;
    r = _resorts[selection];
    std::cout << r;
  }

  void delete_record()
  {
    int selection;
    std::cout << "Enter the ID: ";
    std::cin >> selection;
    _resorts[selection] = _resorts.back();
    _resorts.pop_back();
  }

  void print_all()
  {
    for(int i = 0; i < _resorts.size(); i++) 
    {
      std::cout << i << " " << _resorts[i];
    }
  }

};
