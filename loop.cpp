#include <iostream>

using namespace std;

int main()
{
  cout << "yes";
  int i = 0;
  for (i = 0; i < 5; i++)
  {
    cout << i << endl;
  }
  i = 10;
  while (i > 5)
  {
    cout << i;
    i--;
  }
  i = 5;
  do
  {
    cout << i;
    i--;
  } while (i > 5);
  return 0;
}