#include <iostream>

using namespace std;

class classFunctionOutside
{
private:
  /* data */
public:
  classFunctionOutside(/* args */);
  ~classFunctionOutside();

  void outSideFunExample();
};

classFunctionOutside::classFunctionOutside(/* args */)
{
  cout << "constructor";
}

classFunctionOutside::~classFunctionOutside()
{
  cout << "des";
}

void classFunctionOutside::outSideFunExample()
{
  cout << "see outside this class";
}

int main()
{
}