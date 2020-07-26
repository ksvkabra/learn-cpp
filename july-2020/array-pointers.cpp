// c-style arrays implemetation and testing

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
  {
    cout << *(arr + i) << " ";
    printf("%u\n", (arr + i));
  }

  int *prr = arr;
  cout << prr << " - " << arr << endl;
  cout << prr[0] << endl;
  return 0;
}