#include <iostream>

using namespace std;

int main()
{
  for (int i = 0; i < 10; i++)
  {
    cout << running << endl;
  }

  for (;;)
  {
    cout << running << endl;
    if (1)
    {
      break;
    }
  }
  int i = 5;
  for (; i < 10; i++)
  {
    cout << i << endl;
  }
  for (i = 10;; i--)
  {
    if (i == 5)
    {
      break;
    }
    cout << i << endl;
  }
  return 0;
}