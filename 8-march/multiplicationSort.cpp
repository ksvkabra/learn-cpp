#include <iostream>

using namespace std;

int main()
{
  int matrixOne[3][3] = {{10, 20, 10},
                         {4, 5, 6},
                         {2, 3, 5}};

  int matrixTwo[3][3] = {{3, 2, 4},
                         {3, 3, 9},
                         {4, 4, 2}};

  int result[3][3] = {{0}, {0}, {0}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        result[i][j] += matrixOne[i][k] * matrixTwo[k][j];
      }
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}