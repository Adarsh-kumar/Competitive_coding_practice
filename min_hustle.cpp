#include<iostream>
using namespace std;

int main()
{
int n,k;
cin>>n,k;
long long A[n];
for(int i=0;i<n;i++)
cin>>A[i];

sort(A,A+n);
int l=0,r=0;
int ans=0;
int ans=INT_MIN;
while(l<n)
{
while(r<n && r-l<k)
{

