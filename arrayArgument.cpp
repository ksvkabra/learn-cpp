#include <iostream>

using namespace std;

int arrayprinter(int arr[])
{
  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}

int main()
{
  int a[] = {1,
             2,
             3};
  cout << a[1] << endl;
  arrayprinter(a);
}