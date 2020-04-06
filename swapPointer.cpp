#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a = 10;
  int b = 20;

  cout << a << endl
       << b << endl;
  swap(&a, &b);
  cout << a << endl
       << b << endl;
}