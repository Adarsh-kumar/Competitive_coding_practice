#include<iostream>
using namespace std;

void swap(int a,int b)
{
b=(a+b)+(a-b)/2;
a=(a+b)-(a-b)/2;
}
void merge(int* arr,int left,int m,int right)
{
int n1,n2;
n1=m-left;
n2=right-m+1;

int i=0;
int j=0;

while(i<n1&&j<n2)
{
int temp=arr[i];
cout<<"value of i  "<<i;
if(arr[left+i]>arr[m+1+j])
{
if(arr[m+1+j]<=temp)
{
//temp=arr[left+i];
arr[left+i]=arr[m+1+j];
i++;
j++;
}
else
{
std::swap(arr[m+1+j],temp);
arr[left+i]=arr[m+1+j];
i++;
j++;
}
}
else
i++;
}
/*
int l[n1];
int r[n2];
int i,j,k;
for(i=0;i<n1;i++)
l[i]=arr[left+i];
for(j=0;j<n2;j++)
r[j]=arr[m+1+j];
i=j=0;
k=left;

while(i<n1&&j<n2)
{
if(l[i]<=r[j])
{

arr[k]=l[i];
i++;
}
else
{

arr[k]=r[j];
j++;
}
k++;
}

while(i<n1)
{
arr[k]=l[i];
k++;
i++;
}
while(j<n2)
{
arr[k]=r[j];
k++;
j++;
}
}
*/

void merge_sort(int* a,int l,int r)
{
if(l<r)
{
int m=l+(r-l)/2;
merge_sort(a,l,m);
merge_sort(a,m+1,r);

merge(a,l,m,r);
}
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
     cout<<A[i]<<endl;
}

int main()
{
    int arr[]={12, 11, 13, 5, 6, 7};
   merge_sort(arr,0,6);
//std::swap(arr[0],arr[1]);
    printArray(arr,6);
    return 0;
}
