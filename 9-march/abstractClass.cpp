#include <iostream>

using namespace std;

class Shape
{ //  base class
public:
  virtual void draw() = 0;
};
class Rectangle : public Shape //  inheriting Shape class.
{
public:
  void draw()
  {
    cout << "drawing rectangle..." << endl;
  }
};
class Circle : public Shape //  inheriting Shape class.

{
public:
  void draw()
  {
    cout << "drawing circle..." << endl;
  }
};
int main()
{
  Shape *s; //  base class pointer.
  Rectangle rec;
  Circle cir;
  s = &rec;
  s->draw();
  s = &cir;
  s->draw();
}
