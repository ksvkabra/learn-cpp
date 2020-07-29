#include <iostream>

using namespace std;

class Base
{
public:
  virtual void show()
  {
    cout << "virtual from base class" << endl;
  }
};

class Derived : public Base
{
public:
  void show()
  {
    cout << "derived" << endl;
  }
};

int main()
{
  Base *b = new Derived();
  Base *c;
  Derived d;
  c = &d;
  b->show();
  c->show();
  return 0;
}