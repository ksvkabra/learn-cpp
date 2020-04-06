#include <iostream>

using namespace std;

void add();                  // nn
void subtract(int x, int y); //yn
int multiply();              //ny
int divide(int, int);        //yy
int factorial(int, int = 5); //function with default argument

int main()
{
  int number = 10;
  add();
  subtract(10, 5);
  int resultOfMultiply = multiply();
  int resultOfDivide = divide(10, 2);
  int factorialFun = factorial(1, 2);
  int factorialWithOnlyOneParameter = factorial(1);
  cout << resultOfDivide << endl
       << resultOfMultiply << endl
       << factorialFun << factorialWithOnlyOneParameter;
}

void add()
{
  int x = 10, y = 20;
  // cin >> x >> y;
  cout << x + y;
}

void subtract(int x, int y)
{
  cout << x - y;
}

int multiply()
{
  int x = 10, y = 11;
  // cin >> x >> y;
  return x * y;
}

int divide(int x, int y)
{
  return x / y;
}

int factorial(int x, int y)
{
  return x * y;
}