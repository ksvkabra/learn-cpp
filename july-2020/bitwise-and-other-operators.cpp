#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int i = 3;
  int x = 8;

  cout << int(i & x) << endl;

  cout << int(i | x) << endl;
  cout << ~int(i | x) << endl;
  cout << int(i ^ x) << endl;
  cout << int(i >> 1) << endl;
  cout << int(i << 1) << endl;
  return 0;
}