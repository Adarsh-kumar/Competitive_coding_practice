#include<iostream>
using namespace std;

int find_sum(int* arr,int sum)
{
int dp[sum+1]={0};
for(int i=0;i<=sum;i++)
{
dp[arr[i]]=1;
}

