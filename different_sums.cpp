#include <bits/stdc++.h>

#define mod 1000000009
using namespace std;

int main()
{
int n,t;
cin>>t;

map<int,int> my_map;

while(t--)
{
cin>>n;
int arr[n];
int pre[n+1];
pre[0]=0;


for(int i=0;i<n;i++)
{
cin>>arr[i];
pre[i+1]=arr[i]+pre[i];
}






