#include <iostream>

#include "./database.cpp"
#include "./resort.cpp"

void print_menu() {
  std::cout << "1 -- add" 
         << std::endl << "2 -- select * from resorts" 
         << std::endl << "3 -- pop front"
         << std::endl;
}

int main() {
  DB db;
  int selection = 0;
  while(1) {
    std::cout << "choose an option: " << std::endl;
    print_menu();
    std::cin >> selection;
    switch (selection) {
      case 1: {
        db.add();  
        break;
      }
      case 2:
        db.print_all();
        break;
      case 4:
        db.pop_front();
        break;
      default:
        break;
    }
    selection = 0;
    std::cout << "continuing\n\n";
  }
  return 0;
}
