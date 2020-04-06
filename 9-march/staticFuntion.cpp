#include <iostream>

using namespace std;

class StaticFunction
{
private:
  /* data */
public:
  static int x;
  int y;
  StaticFunction(int z);
  void change()
  {
    x = 40;
    y = 20;
  }

  void static behaviourOfStaticFunction(int q)
  {
    x = q;
    // y = 20;   -> this is wrong because y is not static and static function only access properties which are static
  }
  ~StaticFunction();
};

StaticFunction::StaticFunction(int z)
{
  // x = z;
  y = z;
}

StaticFunction::~StaticFunction()
{
}

int StaticFunction::x = 10; // this is very important
int main()
{
  StaticFunction obj1 = StaticFunction(10);
  StaticFunction obj2 = StaticFunction(20);
  StaticFunction obj3 = StaticFunction(30);

  cout << obj2.x << endl;
  obj1.behaviourOfStaticFunction(3);
  cout << obj1.x << endl;
  StaticFunction::behaviourOfStaticFunction(4);
  cout << obj2.x << endl;
  cout << obj1.y << endl;
  cout << obj2.y << endl;
  cout << obj3.x << endl;
  cout << obj3.y << endl;
  return 0;
}
