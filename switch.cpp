#include <iostream>

using namespace std;

int main()
{
  char day;

  cout << "Enter a number";
  cin >> day;

  switch (day)
  {
  case 'a':
    cout << "Sunday";
    break;
  case 'b':
    cout << "Monday";
    break;
  case 'c':
    cout << "Tuesday";
    break;
  case 'd':
    cout << "Wednesday";
    break;
  case 'e':
    cout << "Thrusday";
    break;
  case 'f':
    cout << "Friday";
    break;
  case 'g':
    cout << "Saturday";
    break;
  default:
    cout << "wrong value entered";
    break;
  }

  return 0;
}