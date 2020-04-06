#include <iostream>

using namespace std;

int main()
{
  int arr[7] = {5, 34, 87, 1, 22, 10, 54};
  int min = 0;
  for (int i = 0; i < 7; i++)
  {
    min = i;
    for (int j = i; j < 7; j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    for (int k = 0; k < 7; k++)
    {
      cout << arr[k] << "  ";
    }
    cout << endl;
  }
}