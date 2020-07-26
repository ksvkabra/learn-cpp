#include <iostream>

using namespace std;

class CopyConstructor
{

public:
  int x;
  CopyConstructor(int x)
  {
    this->x = x;
  }

  CopyConstructor(const CopyConstructor &x)
  {
    this->x = x.x;
  }
};

int main()
{
  int x = 10;
  CopyConstructor a(100);
  CopyConstructor b(a);

  CopyConstructor c = a;
  cout << a.x << endl;
  cout << b.x << endl;
  cout << c.x << endl;
  return 0;
}