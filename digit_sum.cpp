#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max_digits=4;
int min_coin(int arr[],int start,int end,int n,int digits)
{
if(digits>0)
{
if(n==0)
return (1);
if(n<0)
return 0;
if(start==end)
{
return(float(n)/arr[start]==digits);
//return(min_coin(arr,start,end,n-arr[end],digits-1));
}
/*else if(start==end)
{
if(arr[start]==0)
return (digits!=1||n==0);
else if(digits!=1||n==arr[start])
return 1;
else
return 0;
}*/
else
{
if(digits==max_digits)
return(min_coin(arr,start+1,end,n-arr[end],digits-1)+min_coin(arr,start+1,end-1,n,digits));
else
return(min_coin(arr,start,end,n-arr[end],digits-1)+min_coin(arr,start,end-1,n,digits));
}
}
else
return 0;
}

int main()
{
int arr[]={0,1,2,3,4,5,6,7,8,9};
int end=9;
cout<<"no of digits "<<min_coin(arr,0,4,4,2);
return 0;
}

