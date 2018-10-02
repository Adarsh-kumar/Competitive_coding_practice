#include<iostream>
#include<bits/stdc++.h>
#define inf 10000000
using namespace std;

int getMaxArea(int arr[],int n)
{
//by using the two pointer approach
int minimum=1000;
int sum=0;
int ans=0;
int current_area=0;
int l=0,r=-1;
while(l<n)
{
//int current_area=min(minimum,arr[r])*(r-l+1);
while(r<n && min(minimum,arr[r+1])*(r-l+2)>=sum)
{
r++;
minimum=min(minimum,arr[r]);
sum=min(minimum,arr[r])*(r-l+2);
}
ans=max(ans,sum);
sum-=minimum;
l++;
}

return ans;
}

// Driver program to test above function
int main()
{
    int hist[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(hist)/sizeof(hist[0]);
    cout << "Maximum area is " << getMaxArea(hist, n);
    return 0;
}
