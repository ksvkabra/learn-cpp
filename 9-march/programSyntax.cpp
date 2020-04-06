#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <cstdio>

using namespace std;

class BUS
{
  long Bus_No;
  char Description[30];

public:
  void Entry()
  {
    cin >> Bus_No;
    gets(Description);
  }
  void Show()
  {
    cout << Bus_No << ":" << Description << endl;
  }
};
void main()
{
  BUS B;
  B.Entry();
  B.Show();
}