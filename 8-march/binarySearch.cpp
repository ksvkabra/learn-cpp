#include <iostream>

using namespace std;

int binarySearch(int *arr, int item, int length)
{
  int low = 0, high = length - 1;
  int mid;
  while (low <= high)
  {
    mid = (low + high) / 2;
    cout << "looping" << mid << endl;
    if (item < arr[mid])
    {
      high = mid - 1;
    }
    else if (item > arr[mid])
    {
      low = mid + 1;
    }
    else
    {
      return mid;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {10, 12, 33, 54, 56, 70, 80, 104};
  int arr1[] = {10, 12, 33, 54, 56, 70, 80, 104, 43, 23, 4, 5, 6, 7, 8, 10, 12, 33, 56};
  int length = sizeof(arr) / sizeof(arr[0]);

  int number = 10;
  cout << "enter element to search" << endl;
  // cin >> number;
  for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
  {
    cout << binarySearch(arr, arr1[i], length) << endl;
  }
  return 0;
}