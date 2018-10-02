#include<iostream>
using namespace std;

int* closest_sum_finder(int* arr,int n,int* ans)
{
int l=0;
int r=n-1;
int sum=arr[0]+arr[n];
while(l<r)
{
int current_sum=arr[l]+arr[r];
if(current_sum==0)
{
arr[0]=l;
arr[1]=r;
return(arr);
}
else
{
if(current_sum<=sum)
{
sum=current_sum;
l

