#include <iostream>

using namespace std;

class A
{

  int x;
  int y;

public:
  A()
  {
    cout << "constructo called";
    x = 10;
    y = 20;
  }

  A(int a, int b)
  {
    cout << "constructo called";
    x = a;
    y = b;
  }

  A(A &p)
  {
    cout << "constructo called";

    x = p.x;
    y = p.y;
  }

  void display()
  {
    cout << x << endl
         << y << endl;
  }
};

int main()
{
  A x(1, 2);
  x.display();
  A y(x);
  y.display();
  return 0;
}