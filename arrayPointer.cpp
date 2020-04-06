#include <iostream>

using namespace std;

void arrayReturner(int arr[])
{
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
    cout << *(arr + i) << endl;
  }
  cout << endl;
}

void arrayPointerArgument(int *arr)
{
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
    cout << *(arr + i) << endl;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  arrayReturner(arr);
  arrayPointerArgument(arr);
}