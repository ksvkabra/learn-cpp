#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int partition(int* arr, int start, int end){
   int x=arr[end];
   int j=start-1; //last known postion of element samller than x
   for(int i=start;i<=end-1;i++){
       if(arr[i]<=x)
       {
           j+=1;
           swap(arr[j],arr[i]);
       }
   }
   swap(arr[j+1],arr[end]); 
   return j+1;//postion of x after swap
}

void quicksort(int* arr, int start, int end)
{
    if(start < end)
    {
        int p=partition(arr,start,end);
        quicksort(arr,start,p-1);
        quicksort(arr,p+1,end);
    }
}


int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";       
}