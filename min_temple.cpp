#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int* get_left(int arr[],int n)
{
int* lis=new int[n];
for(int i=0;i<n;i++)
{
count=0;
for(int j=0;j<i;j++)
{
if(arr[j]<arr[i])
count++;
}
lis[i]=count;
}
}

return lis;
}

int* get_right(int arr[],int n)
{
int* lis=new int[n];

for(int i=0;i<n;i++)
{
count=0;
for(int j=i+1;j<n;j++)
{
if(arr[j]<arr[i])
count++;
}
lis[i]=count;
}
}

return lis;
}

int min_offer(int arr1[],int n)
{
int* left;
int* right;
left=get_left(arr1,n);
right=get_right(arr1,n);

int main()
{
    int arr1[3] = {1, 2, 2};
    cout << min_offer(3, arr1) << "\n";
    int arr2[6] = {1, 4, 3, 6, 2, 1};
    cout << min_offer(arr2,6) << "\n";
    return 0;
}


