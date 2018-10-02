#include<iostream>
#include<bits/stdc++.h>
#define inf 10000000
using namespace std;

int main()
{
int t,n,k;
cin>>t>>n>>k;
int** arr = new int*[n];
for(int i = 0; i < n; ++i)
    arr[i] = new int[k];

while(t--)
{
for(int i=0;i<n,i++)
{
for(int j=0;j<k;j++)
{
cin>>arr[i][j];
}
}
for(int i=;i<n-1;i++)
{
int l=0,r=0;
while(
