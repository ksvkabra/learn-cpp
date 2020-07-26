#include <iostream>

using namespace std;

/* 
  Types of inheritance
  1. Single Inheritance
  2. Multilevel Inheritance
  3. Heirarchy Inheritance
  4. Multiple Inheritance
  5. Hybrid Inheritance
 */
// single and heirarchial inheritance

class Base
{
  int x;

protected:
  int q;

  void protectedFunction()
  {
    cout << "called protected function" << endl;
  }

public:
  int y;
  static int z;

  Base(int x)
  {
    cout << "constructor from base class" << endl;
  }

  Base()
  {
    cout << "constructor without argument";
  }
  ~Base()
  {
    cout << "Base destructor" << endl;
  }

  void getBase()
  {
    cout << "base get" << endl;
  }

  void get()
  {
    cout << "base get 2" << endl;
  }

  void set()
  {
    cout << "base set" << endl;
  }
};

class Derived : public Base
{
  int x;

public:
  Derived()
  {
    cout << "Derived constructor";
    y = 10;
  }

  ~Derived()
  {
    cout << "derived destructor" << endl;
  }
  void get()
  {
    cout << "called from Derived" << endl;
  }
};

class DerivedAgain : private Base
{
};

class MultiLevel : protected Base
{
};

int Base::z = 10;

int main()
{
  Derived obj = Derived();
  cout << obj.y << endl;
  cout << "static" << Derived::z << endl;
  return 0;
}