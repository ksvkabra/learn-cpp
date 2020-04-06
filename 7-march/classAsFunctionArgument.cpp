#include <iostream>

using namespace std;

class classAsFunctionArgument
{
private:
  /* data */
public:
  int a;
  int b;
  classAsFunctionArgument(/* args */);
  ~classAsFunctionArgument();
};

classAsFunctionArgument::classAsFunctionArgument(/* args */)
{
  cout << "constructor called" << endl;
}

classAsFunctionArgument::~classAsFunctionArgument()
{
  cout << "destructor called" << endl;
}

int add(classAsFunctionArgument obj)
{
  cout << obj.a << obj.b << endl;
  return obj.a + obj.b;
}

int main()
{
  int a = 10;
  classAsFunctionArgument x = classAsFunctionArgument();
  x.a = 10;
  x.b = 20;
  int result = add(x);
  cout << result << endl;
  return 0;
}