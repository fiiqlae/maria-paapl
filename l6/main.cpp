#include "./resort.cpp"
#include "./ChildException1.cpp"
#include <iostream>

void print_menu()
{
  std::cout << "да, это скопированное меню из пред. лабы, ошибись во вводе, чтобы посмотреть эксепшон: \n" 
    << "1 -- write object\n"
    << "2 -- read an object\n"
    << "3 -- print expected\n";
}

int main() 
{
  int selection = 0;
  Resort r, buffer;
  try
  {
    while(1)
    {
      print_menu();
      std::cin >> selection;
      if(selection < 1 || selection > 3) throw InputException("obey the menu");
      switch(selection)
      {
        case(1):
        {
          std::cin >> r;
          buffer = r;
          break;
        }
        case(2):
        {
          std::cout << r;
          break;
        }
        case(3):
        {
          std::cout << buffer;
          break;
        }
        default:
          break;
      }
      selection = 0;
    }
  }
  catch(std::exception& e)
  {
    std::cout << e.what();
  }
  return 0;    
}

