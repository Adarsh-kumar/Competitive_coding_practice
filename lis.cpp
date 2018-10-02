#include<iostream>
using namespace std;

int lis(int* arr,int size)
{
int lis[size];
lis[0]=1;
for(int k=1;k<size;k++)
{
if(arr[k]>arr[k-1])
lis[k]=lis[k-1]+1;
else
lis[k]=lis[k-1];
}
return lis[size-1];
}


int main()
{
    int arr[] = {5,2,7,4,3,8};
 int n = sizeof(arr)/sizeof(arr[0]);
cout<<lis(arr,n);
return 0;
}
