//Problem link- https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

#include <bits/stdc++.h>
using namespace std;
int trap(vector& height) {
int n=height.size();
long long temp1[n], temp2[n];
long long sum=0;
int res=INT_MIN;
int ans=INT_MIN;

    for(int i=0; i<n; i++)
    {
        res=max(res,height[i]); //store max from left
        temp1[i]=res;
    }
    for(int i=n-1; i>=0; i--)
   {
       ans=max(height[i],ans); // store max from right
       temp2[i]=ans;
   }
    for(int i=0; i<n; i++)
    {
        long long x= min(temp1[i], temp2[i]);
        sum=sum+x-height[i];
    }
    return sum;
}
