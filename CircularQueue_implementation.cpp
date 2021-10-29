
#include<bits/stdc++.h>
using namespace std;
enum arr_Size{Size=25};
class Queue
{
private:
    int rear,fr,itemcount;

   public: int arr[Size];
       Queue(int n):rear(-1),fr(-1)
    {
        for(int i=0;i<n;i++)
            arr[i]=0;
    }
bool isempty()
{
    if(rear==-1 && fr==-1)
        return true;
    else
        return false;
}
bool isfull(int n)
{
    if((rear+1)%n==fr)
        return true;
    else
        return false;
}
void Enqueue(int n)
{
    int val;
    cout<<"enter value you want to enter in queue:";
    cin>>val;
    if(isfull(n))
        {cout<<"Queue Full\n";}
    else if(isempty())
    {
        rear=0;
        fr=0;
              arr[rear]=val;
              itemcount++;
    }
    else
    {
        rear=(rear+1)%n;
              arr[rear]=val;
              itemcount++;
    }

}
int dequeue(int n)
{
    int x=0;
    if(isempty())
    {
        cout<<"Queue Full\n";
        return 0;
    }
    else if(rear==fr)
    {
        x=arr[fr];
        arr[fr]=0;
        rear=-1;fr=-1;
        itemcount--;
    return x;
    }
    else
    {
        x=arr[fr];
          arr[fr]=0;
          fr=(fr+1)%n;
          itemcount--;
          return x;
    }
}
void display(int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int count()
{
    return(itemcount);
}
};
int main()
{

    int n,choice;
    cout<<"enter limit of queue:";
    cin>>n;
    Queue q1(n);
  while(1){
    cout<<"\n 1.Enter the element in queue\n";
    cout<<" 2.remove element from queue\n";
    cout<<" 3.is queue empty\n";
    cout<<" 4.is queue full\n";
    cout<<" 5.count elements in Queue\n";
    cout<<" 6.display queue\n";
    cout<<" 7.exit\n";
    cout<<" 8.clear screen\n";
    cout<<"   enter your choice:-";
    cin>>choice;
     switch(choice)
    {
    case 1:
        q1.Enqueue(n);
        break;
    case 2:
        q1.dequeue(n);
        break;
    case 4:
             if(q1.isfull(n)==true)
                cout<<"queue is Full\n";
            else
               cout<< "queue is not Full\n";
            break;
    case 5:
            cout<<q1.count();
            break;
    case 6:
            q1.display(n);
            break;
    case 3:
            if(q1.isempty()==true)
                cout<<"queue is empty\n";
            else
               cout<< "queue is not empty\n";
            break;
    case 7:
        exit(0);
        break;
    case 8:
        system("cls");
        break;
    default:
        cout<<"choose correct option";}
        }
        cout<<"\nNOTE:- if compiler prints 0 that means is queue is no longer connected to on those block";
    return 0;
}
