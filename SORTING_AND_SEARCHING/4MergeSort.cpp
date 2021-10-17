#include<iostream>
using namespace std;

void merge(int* arr,int start, int mid, int mid1,int end){
    int s=start;
    int m1=mid1;
    int *temp=new int[end];
    int i=0;
    while(s<=mid && m1<=end)
    {
        if(arr[s]<arr[m1])
        {
            temp[i++]=arr[s++];
        }
        else
            temp[i++]=arr[m1++];
    }
    while(s<=mid)
        temp[i++]=arr[s++];
    while(m1<=end)
        temp[i++]=arr[m1++];
        int j=0;
    for(int i=start;i<=end;i++)
        arr[i]=temp[j++];
    delete [] temp;
}

void mergesort(int *arr,int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,mid+1,end);
    }
}

int main(){

    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<< " ";
    delete [] arr;
}