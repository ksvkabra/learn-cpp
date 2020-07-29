#include <iostream>

using namespace std;

template <typename T>
T factorial(T i)
{
  int fact = 1;
  for (T j = 1; j <= i; j++)
  {
    fact *= j;
  }
  return fact;
}

template <typename T, typename U>
T addTwoNumbers(T a, U b)
{
  return a + b;
}
template <typename T>
class Base
{
  T x;
  T y;

public:
  Base(T a, T b) : x(a), y(b)
  {
    cout << "constructed" << endl;
  }
  T add()
  {
    return x + y;
  }
};

int main()
{
  int n;
  float m;
  cin >> n >> m;

  cout << factorial<int>(n) << endl;
  cout << factorial<float>(m) << endl;
  cout << addTwoNumbers<int, int>(4, 5) << endl;

  Base<int> obj = Base<int>(4, 5);
  cout << obj.add() << endl;
}