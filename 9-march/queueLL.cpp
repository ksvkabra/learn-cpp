#include <iostream>

using namespace std;

class QNode
{
public:
  int data;
  QNode *next;
  QNode(int d)
  {
    data = d;
    next = NULL;
  }
};

class Queue
{
private:
public:
  QNode *front, *rear;
  Queue()
  {
    front = rear = NULL;
  }
  void enque();
  void deque();
  void display();
};

void Queue::enque()
{
  int number = 5;
  cout << "number";
  cin >> number;
  QNode *newNode = new QNode(number);
  if (rear == NULL)
  {
    front = rear = newNode;
    return;
  }

  rear->next = newNode;
  rear = newNode;

  // newNode->next = rearNode->next;

  // rearNode->next = newNode;
}

void Queue::deque()
{
  if (front == NULL)
    return;

  QNode *newNode = front;
  front = front->next;

  if (front == NULL)
    rear = NULL;

  delete (newNode);
}

void Queue::display()
{

  if (front == NULL)
    return;

  QNode *newNode = front;
  while (newNode->next != NULL)
  {
    cout << "data " << newNode->data << endl;
    newNode = newNode->next;
  }
}
int main()
{
  Queue q = Queue();
  q.enque();
  q.enque();
  q.enque();
  q.enque();
  q.enque();
  q.enque();
  q.display();
  q.deque();
  q.deque();
  q.display();
  return 0;
}