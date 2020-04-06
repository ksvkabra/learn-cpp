#include <iostream>

using namespace std;

void refereceVariableTest(int &c)
{
  cout << "add function called" << endl;
  cout << c << endl;

  c = 60;

  cout << c << endl;
}

int main()
{
  int x = 10;

  int &b = x;

  x = 20;
  cout << b << endl;
  cout << x << endl;

  b = 40;
  cout << b << endl;
  cout << x << endl;

  refereceVariableTest(x);

  cout << x << endl;
  return 0;
}