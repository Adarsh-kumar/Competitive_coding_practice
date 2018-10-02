#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap_the_array(int arr[],int i,int j)
{
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}


int main()
{
int arr[]={1,2,3,4,5};
swap_the_array(arr,0,2);
cout<<arr[0]<<endl;
cout<<arr[2]<<endl;
cout<<'f'-'F'<<endl;
cout<<'Z'-0<<endl;
cout<<pow(7,7);
return 0;
}
