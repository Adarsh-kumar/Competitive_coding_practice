#include<iostream>
using namespace std;

int binary_search(int* arr,int start,int end,int no)
{
int mid=start+(end-start)/2;
if(arr[mid]==no)
return mid;
else if(start==end)
{
if(arr[start]==no)
return start;
else
return -1;
}
else if(arr[mid]<no)
return (binary_search(arr,start,mid-1,no));
}

int max_ones_row(int arr[][4],int m,int n)
{
int max=0;
int no_of_ones;
for(int i=0;i<m;i++)
{
no_of_ones=max;
int start=0;
int end=n-max-1;
while(start<=end)
{
int index=binary_search(arr[i],start,end,1);
if(index!=-1)
{
no_of_ones=max+end-index;
end=index-1;
if(arr[i][index-1]<1)
break;
}
else
break;
}
if(no_of_ones>=max)
max=no_of_ones;
}
return no_of_ones;
}

int main()
{
int m,n;
m=n=4;
int arr[m][4]={ {0, 0, 0, 1},
                       {0, 1, 1, 1},
                       {0, 0, 1, 1},
                       {0, 0, 0, 0}};
 
cout<<max_ones_row(arr,m,n);
return 0;
}
