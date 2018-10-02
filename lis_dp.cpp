#include<iostream>
using namespace std;

int lis_dp(int* array,int size)
{
int lis[size];
for(int i=0;i<size;i++)
{
if(i==0)
lis[i]=1;
else
{
int max=-5;
for(int j=0;j<i;j++)
{
if(array[j]<array[i])
{
int current_max=1+lis[j];
if(current_max>max)
max=current_max;
}
else
continue;
}
if(max!=-5)
lis[i]=max;
else
lis[i]=lis[i-1];
}
}
return lis[size-1];
}

int main()
{
int arr[]={1,2,0,4,5};
cout<<lis_dp(arr,5);
return 0;
}
