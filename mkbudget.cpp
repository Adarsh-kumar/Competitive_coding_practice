#include<iostream>
#include<vector>
#include<bits/stdc++.h>

int mk_budget(int arr1[],int required_emp[],int n)
{
int dp[n];
for(int i=0;i<n;i++)
{
if(i==0)
dp[i]=required_emp[i]*arr1[0]+required_emp[i]*arr1[1];
else if(required_emp[i-1]<required_emp[i])

