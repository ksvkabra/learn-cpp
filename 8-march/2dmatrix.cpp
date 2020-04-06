#include <iostream>

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};

  int matrix[3][3] = {{1, 2, 3},
                      {1, 2, 3},
                      {1, 2, 3}};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  char arr2[10][10] = {"keshav",
                       "kabra",
                       "from",
                       "sikar",
                       "raj",
                       "living",
                       "in",
                       "jaipur"};

  for (int i = 0; i < 10; i++)
  {
    std::cout << arr2[i] << " ";
  }
}