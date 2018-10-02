#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int left_binary_search(int arr[],int start ,int end)
{
int mid=start+(end-start)/2;
int index;
int temp;
if(start==end)
{
    if (arr[start]==0)
    return start;
    else
    return -1;
}
else if(arr[mid]==0)
{
index=mid;
temp=index;
while(temp!=-1&&temp!=0)
{
index=temp;
 temp=left_binary_search(arr,0,mid-1);   
}

return (index);
}
else 
{

if(left_binary_search(arr,0,mid-1)!=-1)
return(left_binary_search(arr,0,mid-1));
else
return(left_binary_search(arr,mid+1,end));

}
}

int main()
{
int  A[]={0,0,0,0,0,1,1,1};
cout<<"  "<<left_binary_search(A,0,8);
return 0;
}


