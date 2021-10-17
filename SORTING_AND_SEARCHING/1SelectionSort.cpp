#include<iostream>
using namespace std;

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
            if(arr[mini]>arr[j])
                mini=j;
        if(mini!=i){
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
        }
    }
}
int main(){
    int arr[]={1,3,2,0,11,5,4};
    selection(arr,7);
    for(int i=0;i<7;i++)
        cout<<arr[i]<<endl;
}