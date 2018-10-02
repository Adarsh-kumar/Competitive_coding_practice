#include<iostream>
using namespace std;

int last_index_finder(int* a,int start,int end)
{
int mid=start+end/2;
if(a[mid]>a[mid+1])
return mid;
else 
return(last_index_finder(a,start,mid));
}

int binary_search(int* a,int start,int end ,int no)
{
int mid=(start+end)/2;
if(start==end)
{
if(a[start]==no)
return start;
else
return -1;
}
else if(a[mid]==no)
return mid;
else if(a[mid]>no)
return(binary_search(a,start,mid,no));
else
return(binary_search(a,mid+1,end,no));
}

int main()
{
int a[]={3,4,5,1,2};
int b[]={1,2,3,4,5};
int key=1;
int start=0;
int pivot_index=last_index_finder(a,start,5);
int ans1=binary_search(a,0,pivot_index,key);
    
if(ans1!=-1)
    cout<<ans1;
else
    cout<<binary_search(a,pivot_index,5,key);
//cout<<ans1;

return 0;
}

