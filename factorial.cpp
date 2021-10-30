#include <iostream>

using namespace std;

int factorial(int a)
{
  if(a > 1)
        return a * factorial(a - 1);
    else
        return 1;
}

int main()
{
  int a;

    cout << "Enter a positive integer: ";
    cin >> a;

    cout << "Factorial of " << a << " = " << factorial(a);

    return 0;
}


