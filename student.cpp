#include <iostream>
#include <string.h>
using namespace std;

class student
{

  //private by default
  char name[20];
  int roll_no;
  int maths;
  int physics;
  int chemistry;
  int average;

public:
  //constructor
  student(char *name, int roll_no, int maths, int physics, int chemistry)
  {
    strcpy(this->name, name);
    this->roll_no = roll_no;
    this->maths = maths;
    this->physics = physics;
    this->chemistry = chemistry;
  }
  int set()
  {
    cin >> roll_no >> maths >> physics >> chemistry;
    cin >> name;
  }

  int get()
  {
    cout << name << endl
         << roll_no << endl
         << maths << endl
         << physics << endl
         << chemistry << endl
         << average;
  }

  int calcAverage()
  {
    average = (maths + physics + chemistry) / 3;
  }
};

int main()
{
  student ayushi = student("ayushi", 123, 100, 100, 100);
  // ayushi.set();
  ayushi.calcAverage();
  ayushi.get();
}

// constructor is an initializer, it initializes the properties of a class when an object is created, if we do not create a construtor then there exists a default construtor with empty body and 0 arguments;
// properties are simply the object properties and methods are the functionalities an object can perform
// there are three access method for class properties and methods
// 1. private -> the properties and methods only accessible by the member functions(methods)
// 2. protected -> accessible by the member function and inherited classes
// 3 public -> accessible by the object .

//static -> when all the object have the same value for a variable that means the variable belongs to the class not the objects individually
// destructor when a class object scope ends it is destroyed and free from memory
// this pointer -> it is default pointer which points to the members of the class and represents the object instance which call the members.