#include <iostream>

using namespace std;

class A
{
private:
  int data;

public:
  A(int x);
  ~A();
};

A::A(int x)
{
  data = x;
  cout << "class A constructor called" << endl;
  cout << data << endl;
}

A::~A()
{
  cout << "class A destructor called" << endl;
}

class B
{
private:
public:
  int data;
  B(int x);
  ~B();
};

B::B(int x)
{
  data = x;
  cout << "class B constructor called" << endl;
  cout << data << endl;
}

B::~B()
{
  cout << "class B destructor called" << endl;
}

class C : public A, public B
{
private:
  int y;

public:
  C(/* args */);
  ~C();
};

C::C(/* args */) : A(10), B(20)
{
  cout << "Constructor called C" << endl;
}

C::~C()
{
}

int main()
{
  C obj = C();
  // cout << obj.data << endl;
  cout << "testing" << obj.B::data << endl;
}