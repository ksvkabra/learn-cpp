#include <iostream>

int num;
int *anotherNum;

int &test()
{
  return num;
}

int main()
{
  test() = 5;
  return 0;
}