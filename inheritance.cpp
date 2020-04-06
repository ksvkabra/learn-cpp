#include <iostream>
#include <string.h>

using namespace std;

class Animal
{
private:
  /* data */
  int x;
  int y;

protected:
  int walk;

public:
  int breath;
  Animal(int breath, int x, int y, int walk)
  {
    cout << "animal constructor called" << endl;
    this->breath = breath;
    this->walk = walk;
    this->x = x;
    this->y = y;
  }

  int sleep()
  {
    cout << "yes animals sleep" << endl
         << x << endl
         << y;
  }

  ~Animal()
  {
    cout << "animal destructor called" << endl;
  }
};

class Dog : Animal
{
private:
  /* data */
  char name[20];

public:
  Dog(char const *name) : Animal(1, 4, 5, 1)
  {
    cout << "dog constructor called" << endl;
    strcpy(this->name, name);
  }

  int sound()
  {
    cout << "yes dogs make sound" << endl;
  }

  int myDetails()
  {
    cout << name << endl;
    // cout << x << endl;
    // cout << y << endl;
    cout << breath << endl;
    cout << walk << endl;
  }
  ~Dog()
  {
    cout << "dog destructor called" << endl;
  }
};

class Cat : public Animal
{
private:
  char name[20];
  /* data */
public:
  Cat(char const *name) : Animal(1, 1, 2, 1)
  {
    cout << "cat constructor called" << endl;
    strcpy(this->name, name);
  }
  int sound()
  {
    cout << "yes cats make sound" << endl;
    // cout << x << endl;
    // cout << y << endl;
    cout << breath << endl;
    cout << walk << endl;
  }
  int myDetails()
  {
    cout << name << endl;
  }
  ~Cat()
  {
    cout << "cat destructor called" << endl;
  }
};

int main()
{
  Cat ayushi = Cat("ayushi");
  Cat priti = Cat("ayushi");
  Dog raghav = Dog("raghav");
  Dog pratik = Dog("pratik");
  Animal keshav = Animal(1, 4, 5, 1);

  // cout << ayushi.x << endl;
  // cout << ayushi.y << endl;
  cout << ayushi.breath << endl;
  // cout << ayushi.walk << endl;
  // cout << ayushi.name << endl;
  ayushi.sound();
  ayushi.myDetails();
  ayushi.sleep();
  // cout << priti.x << endl;
  // cout << priti.y << endl;
  cout << priti.breath << endl;
  // cout << priti.walk << endl;
  // cout << priti.name << endl;
  priti.sound();
  priti.myDetails();
  priti.sleep();
  // cout << raghav.x << endl;
  // cout << raghav.y << endl;
  // cout << raghav.breath << endl;
  // cout << raghav.walk << endl;
  // cout << raghav.name << endl;
  raghav.sound();
  raghav.myDetails();
  // raghav.sleep();
  // cout << pratik.x << endl;
  // cout << pratik.y << endl;
  // cout << pratik.breath << endl;
  // cout << pratik.walk << endl;
  // cout << pratik.name << endl;
  pratik.sound();
  pratik.myDetails();
  // pratik.sleep();
  // cout << keshav.x << endl;
  // cout << keshav.y << endl;
  cout << keshav.breath << endl;
  // cout << keshav.walk << endl;
  keshav.sleep();
}
