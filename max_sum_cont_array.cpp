#include<iostream>
using namespace std;

int max_sum_cont_array(int* arr,int n)
{
int dp[n];
dp[0]=arr[0];
int max_sum=arr[0];
for(int j=1;j<n;j++)
{
if(arr[j]<0||dp[j-1]<0)
dp[j]=arr[j];
else if(arr[j]+dp[j-1]>arr[j])
dp[j]=arr[j]+dp[j-1];
if(dp[j]>=max_sum)
max_sum=dp[j];
}
return max_sum;
}

int main()
{
    int a[] = {-2, -3, -4, -1, -2, 1, -5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<max_sum_cont_array(a, n);
    return 0;
}


