#include <iostream>

using namespace std;

class FriendTest
{
  int x;

public:
  friend void getFunction(FriendTest);
};

void getFunction(FriendTest f)
{
  cout << f.x << endl;
}

int main()
{
  FriendTest obj = FriendTest();
  getFunction(obj);
  return 0;
}