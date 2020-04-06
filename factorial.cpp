#include <iostream>

using namespace std;

int factorial(int a)
{
  int fact = 1;
  for (int i = 1; i < a; i++)
  {
    fact = fact * i;
  }
  return fact;
}

int main()
{
  int number = 10;
  int result = factorial(number);
  cout << result;
}