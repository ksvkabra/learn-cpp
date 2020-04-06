#include <iostream>

using namespace std;

int main()
{
  int i = 5;
  cout << i++ << endl
       << ++i << endl;

  cout << i-- << endl
       << --i << endl;

  cout << --i << endl
       << i-- << endl;

  cout << ++i << endl
       << i++ << endl;

  cout << i;
}