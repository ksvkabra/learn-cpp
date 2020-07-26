#include <iostream>

using namespace std;

class BaseOne
{
private:
  /* data */
public:
  int x;
  int z;
  void get()
  {
    cout << "base one" << endl;
  }

  void setBaseOne()
  {
    cout << "base one" << endl;
  }
  BaseOne(/* args */);
  ~BaseOne();
};

BaseOne::BaseOne(/* args */)
{
  cout << "from base one" << endl;
  z = 10;
}

BaseOne::~BaseOne()
{
  cout << "from base one" << endl;
}

class BaseTwo
{
private:
  /* data */
public:
  int y;
  int z;

  void get()
  {
    cout << "from base two" << endl;
  }

  void setFromBaseTwo()
  {
    cout << "from base two" << endl;
  }
  BaseTwo(/* args */);
  ~BaseTwo();
};

BaseTwo::BaseTwo(/* args */)
{
  cout << "from base two" << endl;
}

BaseTwo::~BaseTwo()
{
  cout << "from base two" << endl;
}

class DerivedClass : public BaseOne, public BaseTwo
{
private:
  /* data */
public:
  DerivedClass(/* args */);
  ~DerivedClass();
};

DerivedClass::DerivedClass(/* args */)
{
  cout << "from devired" << endl;
}

DerivedClass::~DerivedClass()
{
  cout << "from devired" << endl;
}

int main()
{
  DerivedClass obj = DerivedClass();
  obj.BaseOne::get();
  cout << obj.BaseTwo::z << endl;
  return 0;
}