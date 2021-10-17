#include<iostream>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
}
int main(){
    int arr[]={1,3,2,0,11,5,4};
    bubble(arr,7);
    for(int i=0;i<7;i++)
        cout<<arr[i]<<endl;
}