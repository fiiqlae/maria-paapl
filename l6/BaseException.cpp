#pragma once

#include <exception>
#include <iostream>

class LabaException: public std::exception
{
  const char* custom_message;
public:
  LabaException(const char* x) : custom_message(x) {};

	const char * what () const throw ()
  {
    std::cout << "an exception has occured during the lab execution\n";
  	return custom_message;
  }
};
