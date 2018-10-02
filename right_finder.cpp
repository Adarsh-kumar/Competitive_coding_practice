#include<bits/stdc++.h>
using namespace std;


int find_right(int arr[],int start,int end,int value)
{
int lo=start;
    int hi=end;
    
    while(lo<hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==value)
            return mid;
        else if(arr[mid]>value)
            hi=mid;
        else
            lo=mid+1;
    }
    if(arr[lo]>value)
    return lo-1;
    else
return lo;
}


int main()
{
int arr2[]={1,2,16,18,20};
cout<<find_right(arr2,0,6,19)<<endl;
return 0;
}


