#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

typedef struct tower
{
int point;
int height;
}tower;

bool comp(tower a ,tower b)
{
return (a.point<b.point);
}

int find_right(tower arr[],int start,int end,int value)
{
int lo=start;
    int hi=end;
    
    while(lo<hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid].point==value)
            return mid;
        else if(arr[mid].point>value)
            hi=mid;
        else
            lo=mid+1;
    }
     if(arr[lo].point>value)
    return lo-1;
    else
return lo;
}

int main() {
   
    int t;
    int n;
    cin>>t;
    
    while(t--)
    {
    cin>>n;
    tower arr[n];
    map<int,int> my_map;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i].point>>arr[i].height;
        my_map[arr[i].point]=i;
    }
        
    sort(arr,arr+n,comp);
    int dp[n];
    dp[n-1]=1;
        
    for(int i=n-2;i>=0;i--)
    {
        int value=arr[i].point+arr[i].height-1;
    int right=find_right(arr,i,n,value);
      
        if(right!=i)
    dp[i]=max((right-i)+dp[right],1+dp[i+1]);
        else
            dp[i]=1;
    }
        
    int ans[n];
    for(int i=0;i<n;i++)
        
    {
        ans[my_map[arr[i].point]]=dp[i];
    }

        
   for(int i=0;i<n;i++)
     cout<<ans[i]<<" ";
    cout<<endl;
    }
    return 0;
}
