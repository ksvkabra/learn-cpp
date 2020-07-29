#include <iostream>

using namespace std;

class Shape
{
  virtual void draw() = 0;
};

class Rectangle : public Shape
{
  void draw()
  {
    cout << "rectangle" << endl;
  }
};

class Circle : public Shape
{
  void draw()
  {
    cout << "circle" << endl;
  }
};

int main()
{
  Circle obj();
  Rectangle objRect();
}