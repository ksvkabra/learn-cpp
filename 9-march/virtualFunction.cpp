#include <iostream>
using namespace std;
class A
{
  int x = 5;

public:
  void display()
  {
    cout << "Value of x is : " << x << endl;
  }

  virtual void anotherDisplay()
  {
    cout << "virtual";
  }
};
class B : public A
{
  int y = 10;

public:
  void display()
  {
    cout << "Value of y is : " << y << endl;
  }
  virtual void anotherDisplay()
  {
    cout << "not virtual";
  }
};
int main()
{
  A *a = new B();
  // a = &b;
  a->display();
  a->anotherDisplay();
  return 0;
}