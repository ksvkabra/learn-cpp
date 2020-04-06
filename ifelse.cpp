#include <iostream>

using namespace std;

int main()
{

  int x = 10, y = 20, q = 30;
  if (x > y)
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }

  if (x > y)
  {
    cout << "yes";
  }
  else if (y > q)
  {
    cout << "else if";
  }
  else if (x > q)
  {
    cout << "else if";
  }
  else
  {
    cout << "else";
  }

  int z = 30;
  if (x < y)
  {
    if (x > z)
    {
      cout << "x is biggest";
    }
    else
    {
      cout << "z is biggest";
    }
  }
  else
  {
    if (y > z)
    {
      cout << "y is biggest";
    }
    else
    {
      cout << "z is biggest";
    }
  }
}