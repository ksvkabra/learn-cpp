#include <iostream>

using namespace std;

class Base
{
public:
  int x;
  Base(int x)
  {
    this->x = x;
    cout << "base contructor" << endl;
  }
};

class DerivedOne : virtual public Base
{
public:
  DerivedOne() : Base(1)
  {
    cout << "Derived one constructor" << endl;
  }
};

class DerivedTwo : virtual public Base
{
public:
  DerivedTwo() : Base(20)
  {
    cout << "Derived two constructor" << endl;
  }
};

class Derived : public DerivedOne, public DerivedTwo
{
public:
  Derived() : Base(30), DerivedOne()
  {
    cout << "Derived constructor" << endl;
  }
};

int main()
{
  Derived obj = Derived();
  cout << obj.x << endl;
  return 0;
}