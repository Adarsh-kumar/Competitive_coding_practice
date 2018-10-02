#include<iostream>
using namespace std;

int main()
{
int n,k;
cin>>n;
long long arr[n];

int l=0,r=0;

long long ans=0;
//long long sum=0;

while(l<r)
{
while(r<n)
{
if(arr[r]!=arr[l])
{
l++;
ans++;
if(
