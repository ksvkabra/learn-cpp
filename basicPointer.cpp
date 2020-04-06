#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int *ptr;
  ptr = &a;

  cout << a << endl;
  cout << &a << endl;
  cout << &ptr << endl;
  cout << ptr << endl;
  cout << *ptr << endl;
}