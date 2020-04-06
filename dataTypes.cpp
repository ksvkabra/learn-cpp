#include <iostream>

using namespace std;

int main()
{
  // this is a variable of type integer
  int x = 2147483648;

  // this is a variable of type decimal
  float y = 10.05;

  // this is a variable of type character
  char a = 'x';

  // this is a variable of type integer bigger then before
  long int z = 20;

  // this is a variable of type big decimal number
  double q = 12.999999;

  cout << sizeof(x) << y << a << z << q;
  return 0;
}