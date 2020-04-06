#include <iostream>

using namespace std;

class Stack
{
private:
public:
  int data;
  Stack *next;
  void push();
  void pop();
  void display();
};

void Stack::push()
{
  Stack *newNode;
  newNode = new Stack();
  int number = 5;
  cin >> number;

  newNode->data = number;

  newNode->next = this->next;

  this->next = newNode;
}

void Stack::pop()
{
  this->next = (this->next)->next;
}

void Stack::display()
{
  Stack *newNode = new Stack();
  newNode = this->next;
  while (newNode->next != NULL)
  {
    cout << "data " << newNode->data << endl;
    newNode = newNode->next;
  }
}
int main()
{
  Stack firstNode = Stack();
  firstNode.next = NULL;
  cout << firstNode.next << endl;
  firstNode.push();
  firstNode.push();
  firstNode.push();
  firstNode.push();
  firstNode.push();
  firstNode.push();
  firstNode.display();
  firstNode.pop();
  firstNode.pop();
  firstNode.display();
  return 0;
}