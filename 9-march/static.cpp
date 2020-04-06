#include <iostream>

using namespace std;

class Static
{
private:
  /* data */

public:
  static int x;
  int y;
  Static(int z);
  void change()
  {
    x = 40;
    y = 20;
  }
  ~Static();
};

Static::Static(int z)
{
  // x = z;
  y = z;
}

Static::~Static()
{
}

int Static::x = 10;
int main()
{
  Static obj1 = Static(10);
  Static obj2 = Static(20);
  Static obj3 = Static(30);

  cout << obj1.x << endl;
  cout << obj1.y << endl;
  cout << obj2.x << endl;
  cout << obj2.x << endl;
  cout << obj2.y << endl;
  cout << obj3.x << endl;
  cout << obj3.y << endl;

  cout << Static::x;
  Static::x = 20;

  cout << "afte changing the value of static variable" << endl;
  cout << obj1.x << endl;
  cout << obj2.x << endl;
  cout << obj2.x << endl;
  cout << obj3.x << endl;

  // Static::y = 30;
  obj1.change();
  cout << "after calling the change function";
  cout << obj1.x << endl;
  cout << obj1.y << endl;
  cout << obj2.x << endl;
  cout << obj2.x << endl;
  cout << obj2.y << endl;
  cout << obj3.x << endl;
  cout << obj3.y << endl;
  return 0;
}
