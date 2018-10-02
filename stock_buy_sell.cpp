#include<iostream>
using namespace std;

int max_profit_finder(int arr[],int n)
{
if(n==1)
return 0;
else
{
int i=1;
int prev=arr[0];
while(arr[i]>arr[0])
{
prev=arr[i];
i++;
}
cout<<"sell the stock at "<<i-1;


int main ()
{

