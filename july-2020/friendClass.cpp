#include <iostream>

using namespace std;

class FriendOne;

class FriendTwo
{
  int y;
  void nothing(FriendOne obj);

public:
  void something(FriendOne obj);
};

class FriendOne
{
  int x;
  friend class FriendThree;

  // friend void FriendTwo::nothing(FriendOne obj);
  friend void FriendTwo::something(FriendOne obj);
};

void FriendTwo::nothing(FriendOne obj)
{
  // cout << "yes it also worked" << obj.x << endl;
}

void FriendTwo::something(FriendOne obj)
{
  cout << "called" << obj.x << endl;
  nothing(obj);
}

class FriendThree
{
public:
  void get(FriendOne x)
  {
    cout << x.x << endl;
  }
};

int main()
{
  FriendOne obj = FriendOne();
  FriendTwo objTwo = FriendTwo();
  FriendThree objThree = FriendThree();

  objThree.get(obj);
  objTwo.something(obj);
  return 0;
}