#include <iostream>

using namespace std;

class Base
{
  static int x;
  int y;

public:
  void get()
  {
    cout << x << endl;
  }

  static void getAnother()
  {
    cout << x << endl;
    // cout << y << endl; -> this line is error because static functions can only access static data members of a class.
  }
};

int Base::x = 10;

int main()
{
  Base base1;
  Base base2;

  base1.get();
  base2.get();
  base1.getAnother();
  Base::getAnother();
  return 0;
}