#include <iostream>

using namespace std;

int askPrinter()
{
}

int main()
{
  int a[12] = {1, 5, 2, 3, 4, 8, 9, 1, 2, 3, 4, 5};

  for (int i = 0; i < 12; i++)
  {
    cout << i + 1 << " ---position on left - element on right-- " << a[i] << endl;
  }
  int request = 10;
  while (request != 100)
  {
    cout << 'enter a number, to stop the loop enter 100';
    cin >> request;
    cout << a[request - 1] << endl;
  }
}