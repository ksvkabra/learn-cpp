#include <iostream>

using namespace std;

class Base
{
  int x;
  int y;

public:
  Base(int a, int b) : x(a), y(b)
  {
    cout << "constructor";
  }
  void get()
  {
    cout << "get - " << x << " " << y << endl;
  }

  ~Base()
  {
    cout << "destructor";
  }
};

int main()
{
  cout << "yeah" << endl;
  Base base(1, 3);
  Base base2 = Base(2, 3);

  base.get();
  base2.get();
  return 0;
}