#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
  // int type conversion
  int numberOne = 10;
  float numberTwo = 10.04;
  string typeOfNumberTwo = typeid(numberTwo).name();
  cout << typeOfNumberTwo << endl;

  cout << typeid(numberTwo).name() << endl;
  cout << typeid(numberOne).name() << endl;

  cout << typeid(numberOne / numberTwo).name() << endl;
  cout << typeid(numberTwo / numberOne).name() << endl;

  long long int numberThree = 100;
  cout << "testing long long int" << endl;

  // result is of type long long int in both these cases
  cout << typeid(numberThree / numberOne).name() << endl;
  cout << typeid(numberOne / numberThree).name() << endl;

  // result is float in both these cases
  cout << typeid(numberThree / numberTwo).name() << endl;
  cout << typeid(numberTwo / numberThree).name() << endl;

  double numberFour = 10;
  cout << "testing double" << endl;

  // result is float in below six cases
  cout << typeid(numberFour / numberOne).name() << endl;
  cout << typeid(numberOne / numberFour).name() << endl;

  cout << typeid(numberFour / numberTwo).name() << endl;
  cout << typeid(numberTwo / numberFour).name() << endl;

  cout << typeid(numberFour / numberThree).name() << endl;
  cout << typeid(numberThree / numberFour).name() << endl;

  long double numberFive = 10;
  cout << "testing long double" << endl;
  // result is long double in all below cases these cases

  cout << typeid(numberFive / numberOne).name() << endl;
  cout << typeid(numberOne / numberFive).name() << endl;

  cout << typeid(numberFive / numberTwo).name() << endl;
  cout << typeid(numberTwo / numberFive).name() << endl;

  cout << typeid(numberFive / numberThree).name() << endl;
  cout << typeid(numberThree / numberFive).name() << endl;

  cout << typeid(numberFive / numberFour).name() << endl;
  cout << typeid(numberFour / numberFive).name() << endl;
}