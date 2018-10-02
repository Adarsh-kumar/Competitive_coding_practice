#include<iostream>
using namespace std;
int maximum=50000;

int min_steps(int arr[],int start,int n)
{
if(arr[start]==1)
return start+min_steps(arr,start+1,n);
for(int i=start;i<start+arr[start];i++)
{
int current_steps=min_steps(arr,start,start+i)+min_steps(arr,start+i,start+arr[start]);
if(current_steps<maximum)
maximum=current_steps;
}
return (maximum);
}

int main()
{
int arr[]={1,2,3,4,5};
cout<<min_steps(arr,0,4);
return 0;
}

