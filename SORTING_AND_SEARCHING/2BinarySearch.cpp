#include<iostream>
using namespace std;

bool binary(int arr[],int start,int n,int x){
    if(start<=n)
    {
        int p=(start+n)/2;
        if(arr[p]==x)
            return true;
        else if(arr[p]>x)
            return binary(arr,start,p-1,x);
        else if(arr[p]<x)
            return binary(arr,p+1,n,x);
    }
    else
        return false;
}

bool binarySearch(int arr[],int n,int x){
    return binary(arr,0,n-1,x);
}

int main(){
    int arr[]={0,1,2,4,5,6,7,8,9,10};
    int a;
    cin>>a;
    a=10;
    if(binarySearch(arr,a,9))
        cout<<"FOUND";
    else
        cout<<"NOT FOUND";
}