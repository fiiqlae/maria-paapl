#include "./BaseException.cpp"

class InputException: public LabaException
{
public:
  InputException(const char* x) : LabaException(x)
  {
    std::cout << "an input exception has occured\n";
  }
};
