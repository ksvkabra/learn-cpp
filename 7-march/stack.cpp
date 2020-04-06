#include <iostream>

using namespace std;

int pop(int *, int);
int push(int *, int, int);
void display(int *, int);
int isEmpty();

int main()
{
  int arr[5] = {0}, top = -1;
  int option = 2;
  while (option < 4 && option > 0)
  {
    cin >> option;
    cout << "enter option" << endl;
    cout << "1. push" << endl;
    cout << "2. pop" << endl;
    cout << "3. display" << endl;
    cout << "4 exit" << endl;
    switch (option)
    {
    case 1:
      top = pop(arr, top);
      break;
    case 2:
      int item;
      cout << "enter item to insert";
      cin >> item;
      top = push(arr, top, item);
      break;
    case 3:
      display(arr, top);
      break;
    default:
      break;
    }
  }
}

int pop(int *arr, int top)
{
  if (top < 0)
  {
    cout << "stack underflow";
    return top;
  }
  else
  {
    cout << "removed " << arr[top] << "from array";
    arr[top] = 0;
    top--;
  }
  return top;
}

int push(int *arr, int top, int item)
{
  if (top >= 4)
  {
    cout << "stack overflow";
    return top;
  }
  else
  {
    top++;
    arr[top] = item;
  }
  return top;
}

void display(int *arr, int top)
{
  for (int i = 0; i <= top; i++)
  {
    cout << arr[i];
  }
}
