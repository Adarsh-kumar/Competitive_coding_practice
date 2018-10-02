#include<iostream>
using namespace std;
int count=0;
int mid_element=3;
int index_finder(int* arr,int start,int end)
{
int mid=(start+end)/2;
if (start==end)
{
if(arr[start]==mid_element)
return (1);
else
return 0;
}
else if(arr[mid]==mid_element)
{
return(index_finder(arr,start,mid)+index_finder(arr,mid+1,end));
}
}
int main ()
{
int arr[]={-1,0,1,3,5};
int count2=index_finder(arr,0,5);
//if(count>2)
cout<<"this is "<<count2;
return 0;
}
