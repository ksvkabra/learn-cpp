#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception
{
public:
  const char *what() const throw()
  {
    return "My Own Error";
  }
};

int factorial(int x)
{
  throw MyException();
  return 0;
}

int main()
{
  try
  {

    int factorialResult = factorial(5);
  }
  catch (const MyException &e)
  {
    cout << e.what() << endl;
  }

  cout << "here we are";
  return 0;
}