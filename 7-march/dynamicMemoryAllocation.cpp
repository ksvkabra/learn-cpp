#include <iostream>

using namespace std;

int main()
{
  int *a = new int();
  cout << a;
  delete a;
  int *n = new int[5];

  int arr[5] = {1, 2, 3, 4, 5};
  cout << sizeof(arr) / sizeof(arr[0]);
  delete[] n;
  return 0;
}